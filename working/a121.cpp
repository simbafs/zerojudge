#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxn = 5761460;
// const int maxn = 200;

int primeNum[maxn] = {2, 3, 5};
int primeCount = 3;
int step = 4;

bool isPrime(int n){
	int sqrtN = sqrt(n)+1;
	// printf("%d, %d\n", n, sqrtN);
	for(int i = 0; i < primeCount && primeNum[i] < sqrtN; i++){
		// printf("n= %d, prime[%d]= %d\n", n, i, primeNum[i]);
		if(n % primeNum[i] == 0) return false;
	}
	// printf("> find a prime: %d\n", n);
	return true;
}

void findPrimeNumber(int end){
	for(int i = primeNum[primeCount-1]+6-step; i <= end; i+= step, step = 6-step){
		// printf("i=%d, step=%d\n", i, step);
		if(isPrime(i)) primeNum[primeCount++] = i;
	}
	// printf("Finding %d prime in %d\n", primeCount, end);
}

int bigger(int a, int b){
	return a - b > 0 ? a : b;
}

int main(){
	// findPrimeNumber(maxn);
	// printf("%d\n", primeCount);
    //
	int a = 0;
	int b = 0;

	// printf("%d\n", primeCount);
	while(scanf("%d %d", &a, &b) != EOF){
		findPrimeNumber(bigger(a, b));
		int count = 0;
		for(int i = 0; i < primeCount; i++){
			if(primeNum[i] >= a && primeNum[i] <= b) count++;
		}
		printf("%d\n", count);
	}

	// findPrimeNumber();
	// for(int i = 0; i < primeCount; i++){
	//     printf("%d ", primeNum[i]);
	// }
	// printf("\n");
	// isPrime(7);
	// printf("%d %d %d\n", isPrime(6), isPrime(7), isPrime(4));
	return 0;
}
