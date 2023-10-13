#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

// HASHMAPS:

// int main() {

//   // Creation:
//   unordered_map<string, int> m;

//   // Insertion:
//   pair<string, int> p1 = make_pair("Suraj", 2);
//   m.insert(p1);
//   pair<string, int> p2 = make_pair("Sam", 4);
//   m.insert(p2);

//   // Searching:
//   cout << m["Suraj"] << endl;
//   cout << m["Sam"] << endl;
//   cout << m["unknown"] << endl;

//   // Size:
//   cout << m.size() << endl;

//   // Checking presence:
//   cout << m.count("bro") << endl;
//   cout << m.count("Suraj") << endl;

//   // Erasing:
//   m.erase("Sam");
//   cout << m.size() << endl;

//   // Iterator:
// unordered_map<string, int>::iterator it = m.begin();
//   while (it != m.end()) {
//     cout << it->first << " " << it->second << endl;
//     it++;
//   }
// }

// Q1) Maximum Frequency Number:

// int maximumFrequency(vector<int> &arr, int n){

//     unordered_map<int, int> count;
//     int maxFreq = 0;
//     int maxAns = 0;

//     for(int i = 0; i < arr.size(); i++){
//         count[arr[i]]++;
//         maxFreq = max(maxFreq, count[arr[i]]);
//     }
//     for(int i = 0; i < arr.size(); i++){
//         if(maxFreq == count[arr[i]]){
//             maxAns = arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }

