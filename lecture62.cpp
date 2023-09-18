// #include <iostream>
// using namespace std;

// Q1) Celebrity Problem:

// class Solution
// {
//     private:
//     bool knows(vector<vector<int> >& M, int a, int b, int n) {
//         if(M[a][b] == 1)
//             return true;
//         else
//             return false;
//     }
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n)
//     {
//         stack<int> s;
//         //step1: push all element in stack
//         for(int i=0; i<n; i++) {
//             s.push(i);
//         }

//         //step2: get 2 elements and copare them

//         while(s.size() > 1) {

//             int a = s.top();
//             s.pop();

//             int b = s.top();
//             s.pop();

//             if(knows(M,a,b,n)){
//                 s.push(b);
//             }
//             else
//             {
//                 s.push(a);
//             }
//         }
//         int ans = s.top();
//         //step3: single element in stack is potential celeb
//         //so verify it

//         int zeroCount = 0;

//         for(int i=0; i<n; i++) {
//             if(M[ans][i] == 0)
//                 zeroCount++;
//         }

//         //all zeroes
//         if(zeroCount != n)
//             return -1;

//         //column check
//         int oneCount = 0;

//         for(int i=0; i<n; i++) {
//             if(M[i][ans] == 1)
//                 oneCount++;
//         }

//         if(oneCount != n-1)
//             return -1;

//         return ans;

//     }
// };

// Q2) Maximal Rectangle with all 1's in B. Matrix:

// class Solution {
//      private:
//     vector<int> nextSmallerElement(int *arr,int n){
//         stack<int>s;
//         s.push(-1);
//         vector<int>ans(n);
//         for(int i=n-1;i>=0;i--){
//             int curr=arr[i];
//             while(s.top()!=-1 && arr[s.top()]>=curr){
//                 s.pop();
//             }
//             ans[i]=s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//      vector<int> prevSmallerElement(int *arr,int n){
//         stack<int>s;
//         s.push(-1);
//         vector<int>ans(n);
//         for(int i=0;i<n;i++){
//             int curr=arr[i];
//             while(s.top()!=-1 && arr[s.top()]>=curr){
//                 s.pop();
//             }
//             ans[i]=s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int largestRectangularArea(int *arr,int n){
//         vector<int>next(n);
//         next= nextSmallerElement(arr, n);
//         vector<int>prev(n);
//         prev= prevSmallerElement(arr, n);
//         int area=INT_MIN;
//         for(int i=0;i<n;i++){
//             int l=arr[i];
//             if(next[i]==-1){
//                 next[i]=n;
//             }
//             int b=next[i]-prev[i]-1;
//             int newArea=l*b;
//             area=max(area,newArea);
//         }
//         return area;
//     }

// public:
//     int maximalRectangle(vector<vector<char>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();

//         int arr[n][m];

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 arr[i][j]=matrix[i][j]-'0';
//             }
//         }

//         int area=largestRectangularArea(arr[0],m);
//         for(int i=1;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(arr[i][j]!=0){
//                     arr[i][j]=arr[i][j]+arr[i-1][j];
//                 }
//                 else arr[i][j]=0;
//             }
//             int newArea=largestRectangularArea(arr[i],m);
//             area=max(newArea,area);
//         }
//         return area;
//     }
// };
