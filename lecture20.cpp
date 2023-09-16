// #include <iostream>
// #include <array>
// #include <vector>
// #include <deque>
// #include <list>
// #include <stack>
// #include <queue>
// #include <set>
// #include <map>

// using namespace std;

// NOTE:  isme sab kuch nahi hai bas for ROUGH PURPOSE:

// C++ STL:

// 1) Arrays:

// int main() {

//   int basic[4] = {1, 2, 3, 4};
//   array<int, 4> a = {1, 2, 3, 4};

//   int size = a.size();

//   for (int i = 0; i < size; i++) {

//     cout << a[i] << endl;
//   }

//   cout<<a.at(2)<<endl;
//   cout<<a.empty()<<endl;
//   cout<<a.front()<<endl;
//   cout<<a.back()<<endl;
// }

// 2) Vector:
// int main() {

// vector<int> v;
// cout << "Size is: " << v.capacity() << endl;

// v.push_back(4);
// cout << v.capacity() << endl;

// cout << v.size() << endl;
// cout << v.at(2) << endl;

//   vector<int> a(5,1);
//   fot(int i:a){
//     cout<<i<<endl;

//   }
// }

// 3) Deque:

// int main() {

//   deque<int> d;

//   d.push_back(1);
//   d.push_front(2);
//   for (int i : d) {
//     cout << i << endl;
//   }

//   cout<<d.at(1)<<endl;
// }

// 4) List:

// int main(){

//   list<int> l(50,100);

//   // l.push_back(3);
//   // l.push_front(4);

//   for(int i:l){
//     cout<<i<<endl;
//   }
// }

// 5) Stack:

// int main() {

//   stack<string> s;

//   s.push("Suraj");
//   s.push("Pratap");
//   cout << s.top() << endl;
//   cout << s.top() << endl;
// }

// 6) Queue:

// int main() {
//   queue<string> q;
//   q.push("Suraj");
//   q.push("Pratap");
//   cout << q.front() << endl;
// }

// 7) Priority Queue:

// MAX HEAP

// int main() {

//   // MAX HEAP
//   priority_queue<int> maxi;

//   // MIN HEAP

//   priority_queue<int, vector<int>, greater<int>> mini;

//   maxi.push(1);
//   maxi.push(2);
//   maxi.push(3);
//   maxi.push(4);

//   int n = maxi.size();

//   for (int i = 0; i < n; i++) {
//     cout << maxi.top() << " ";
//     maxi.pop();
//   }
//   cout << endl;

//   mini.push(1);
//   mini.push(2);
//   mini.push(3);
//   mini.push(4);

//   int m = mini.size();

//   for (int i = 0; i < m; i++) {
//     cout << mini.top() << " ";
//     mini.pop();
//   }
//   cout << endl;
// }

// 8) Sets:

// int main() {
//   set<int> s;

//   s.insert(1);
//   s.insert(1);
//   s.insert(5);
//   s.insert(3);
//   s.insert(5);
//   s.insert(4);

//   for(int i:s){
//   cout<<i<<endl;
//   }

// }

// 9) Maps:

// int man(){
//   map<int, string> m;

//   m[1] = "Suraj";
//   m[2] = "Pratap";

//   m.insert({4, "Sam"});
//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//   }
// }

// STL ALGORITHMS:

// #include <algorithm>
// #include <vector>

// int main() {

//   vector<int> v;

//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);

//   cout << binary_search(v.begin(), v.end(), 5) << endl;
//   cout << binary_search(v.begin(), v.end(), 3) << endl;
// }
