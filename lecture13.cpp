// #include <iostream>
// using namespace std;


// Q1) FIRST AND LAST OCCURENCE IN A SORTED ARRAY:

// int firstOccurence(vector<int>& arr, int n, int k) {
//   int start = 0;
//   int end = n;
//   int ans = -1;
//   int mid = start + (end - start) / 2;

//   while (start <= end) {
//     if (arr[mid] == k) {
//       ans = mid;
//       end = mid - 1;
//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }

//     mid = start + (end - start) / 2;
//   }
//   return ans;
// }

// int lastOccurence(vector<int>& arr, int n, int k) {
//   int start = 0;
//   int end = n;
//   int ans = -1;
//   int mid = start + (end - start) / 2;

//   while (start <= end) {
//     if (arr[mid] == k) {
//       ans = mid;
//       start = mid + 1;

//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }

//     mid = start + (end - start) / 2;
//   }
//   return ans;
// }


// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//         pair<int, int> p;
//         p.first = firstOccurence(arr,n, k);
//         p.second = lastOccurence(arr,n, k);

//         return p;
// }

// Q2) PEAK INDEX IN MOUNTAIN ARRAY

  // int peakIndexInMountainArray(vector<int>& arr) {
        
  //       int start = 0;
  //       int end = arr.size() -1;

  //       int mid = start + (end - start)/2;

  //       while(start<end){
  //           if(arr[mid] < arr[mid+1]){
  //               start = mid + 1;
  //           }
  //           else{
  //               end = mid;
  //           }
  //           mid = start + (end-start)/2;
  //       }
  //       return start;
  //   }