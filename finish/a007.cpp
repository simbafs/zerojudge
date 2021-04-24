#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxn = 47000;
// const int maxn = 30;

int primeNum[maxn] = {2, 3, 5};
int primeCount = 3;

bool isPrime(int n, bool flag){
	if(n < 2) return false;
	for(int i = 0; pow(primeNum[i], 2) < n && i < primeCount; i++){
		if(flag) printf("> %d, %d\n", n, primeNum[i]);
		if(n%primeNum[i] == 0) return false;
	}

	return true;
}

void findPrime(int end, bool flag){
	for(int i = 7, j = 4; i < end; i += j, j = 6-j){
		if(flag) printf("> i= %d, j=%d\n", i, j);
		if(isPrime(i, false)) primeNum[primeCount++] = i;
	}
}

int main(){
	findPrime(maxn, false);
	int a = 0;
	while(scanf("%d", &a) != EOF){
		// printf("%d %d\n", isPrime(a, true), a);
		printf("%s\n", isPrime(a, false) ? "質數" : "非質數");
	}

	// for(int i = 0; i < primeCount; i++){
	//     printf("%d ", primeNum[i]);
	// }
	// printf("\n");
	return 0;
}
