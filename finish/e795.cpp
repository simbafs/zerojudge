#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <utility>

using namespace std;

// const int maxn = 30000000;
const int maxn = 6000;
vector<int> primeTable = {2, 3, 5};
vector<pair<int, bool>> dp;

bool /**_**/isPrime(int n, bool isBuilding, bool debug){
	debug && printf("isPrime:  %d\t%d\n", n, isBuilding);

	if(isBuilding){
		int sqrtn = sqrt(n);
		int primeCount = primeTable.size();
		if(n <= 1) return false;

		for(int i = 0; primeTable[i] <= sqrtn && i < primeCount; i++){
			if(n % primeTable[i] == 0) return false;
		}

		return true;
	}else{
		for(int i : primeTable){
			if(n == i) return true;
		}
		return false;
	}
}

// bool isPrime(int n, bool debug){
//     debug && printf("isPrime:  %d\n", n);
//     for(auto i : dp){
//         if(i.first == n) return i.second;
//     }
//
//     bool result = _isPrime(n, debug);
//     dp.push_back(make_pair(n, result));
//     return result;
// }

int buildPrimeTable(int max){
	for(int i = 7, j = 4; i < max; i += j, j = 6 - j){
		if(isPrime(i, true, false)) primeTable.push_back(i);
	}
	return 0;
}

int main(){
	buildPrimeTable(maxn);
	int d = 0;
	cin >> d;
	for(; d > 0; d--){
		int flag = true;
		int n = 0;
		int backOfN = 0;
		cin >> n;
		backOfN = n;
		for(int i = 7; i >= 0; i--){
			if(isPrime(n, true, false)){
				n %= (int)pow((double)10, (double)i);
			}else{
				flag = false;
				break;
			}
		}

		// while(n > 0){
		//     if(isPrime(n, true)) n /= 10;
		//     else {
		//         flag = false;
		//         break;
		//     }
		// }

		printf("%d %s a Prime Day!\n", backOfN, flag ? "is" : "isn't");
	}

	// test buildPrimeTable
	// for(auto i : primeTable){
	//     cout << i << '\n';
	// }

	// test isPrime
	// int a = 0;
	// while(scanf("%d", &a) != EOF){
	//     printf("%d\t%d\n", a, isPrime(a));
	// }

	return 0;
}

/*	   X  x  x     x
 *	1  2  3  4  5  6
 *	7  8  9  10 11 12
 *	13 14 15 16 17 18
 *	19 20 21 22 23 24
 */
