#include <iostream>
using namespace std;


// Q) Count PRIMES:

    // int countPrimes(int n) {
        
    //     int count = 0;
    //     vector<bool> prime(n+1, true);

    //     prime[0] = prime[1] = false;

    //     for(int i = 2; i<n; i++){
    //         if(prime[i]){
    //         count++;

    //         for(int j = 2*i; j<n; j = j+i){
    //             prime[j] = 0;
    //             }
    //         }

    //     }
    //     return count;
    // };

// Q) Modular Exponentiation:

// int modularExponentiation(int x, int n, int m) {
// 	int result = 1;
// 	while(n>0){
// 		if(n&1){
// 			result = (1LL * (result)%m * (x) % m) %m;
// 		}
// 		x = (1LL * (x)%m * (x)%m) %m;
// 		n = n>>1;
// 	}
// 	return result;
// }