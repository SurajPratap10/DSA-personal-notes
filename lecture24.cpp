#include <iostream>
using namespace std;

// Char, Arrays, Strings and Questions:

// int main() {

//   char name[20];
//   name[2] = '\0';
//   cin >> name;

//   cout<<name<<endl;
// }

// Q) Revese a STRING:

// string reverseString(string str){
//   int s = 0;
//   int n = str.size();
//   int e = n-1;

//   while(s<e){
//     swap(str[s++], str[e--]);
//   }
//   return str;
// }

// Q) valid PALINDROME:

// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// private:
//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >=
//         '0' && ch <= '9')) {
//             return 1;
//         }

//         return 0;
//     }

//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
//     bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// public:
//     bool isPalindrome(string s) {

//         //faltu character hatado
//         string temp = "";

//         for(int j=0; j<s.length(); j++) {
//             if(valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }

//         //lowercase me kardo
//         for(int j=0; j<temp.length(); j++) {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         //check palindrome
//         return checkPalindrome(temp);

//     }
// };

// Q) Maximum Occuring Character in a String:

// char highestOccurringChar(char input[]) {
// int arr[26] = {0};

//   for(int i = 0; input[i] != '\0'; i++){
//     char ch = input[i];
//     int number = 0;
//     number = ch - 'a';
//     arr[number] ++;

//   }

//   int maxi = -1;
//   int ans = 0;

//     for(int i = 0; i<26; i++){
//       if(maxi < arr[i]){
//         ans = i;
//         maxi = arr[i];
//       }
//     }

//   char finalAns = 'a' + ans;
//   return finalAns;

// }

// Q) Permutation in a String:

// class Solution {
// private:
//     bool checkEqual(int a[26], int b[26]){
//         for(int i = 0; i<26; i++){
//             if(a[i] != b[i]){
//                 return 0;
//             }
//         }
//             return 1;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {

//         int count1[26] = {0};

//         for(int i = 0; i<s1.length(); i++){
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }

//         int i = 0;
//         int windowSize = s1.length();
//         int count2[26] = {0};

//         while(i<windowSize && i<s2.length()){
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }

//         if (checkEqual(count1, count2)){
//             return 1;
//         }

//         while(i<s2.length()){
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;

//             char oldChar = s2[i-windowSize];
//             index = oldChar - 'a';
//             count2[index]--;
//             i++;

//         if (checkEqual(count1, count2)){
//             return 1;
//             }
//         }
//         return 0;
//     }
// };

// Q) String Compression:

// int compress(vector<char>& chars) {
//     int i =0;
//     int ansIndex = 0;
//     int n = chars.size();

//     while(i<n){
//         int j = i+1;
//         while(j<n && chars[i] == chars[j]){
//             j++;
//         }

//         chars[ansIndex++] = chars[i];
//         int count = j-i;

//         if(count>1){
//             string cnt = to_string(count);
//             for(char ch : cnt){
//                 chars[ansIndex++] = ch;
//             }
//         }
//         i=j;
//     }
//     return ansIndex;
// }