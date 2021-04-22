#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxn = 10000;
// const int maxn = 200;

int primeNum[maxn] = {2, 3, 5};
int primeCount = 3;

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
	for(int i = 7, j = 4; i <= end; i+= j, j = 6-j){
		// printf("i=%d, step=%d\n", i, step);
		if(isPrime(i)) primeNum[primeCount++] = i;
	}
	// printf("Finding %d prime in %d\n", primeCount, end);
}

int main(){
	findPrimeNumber(maxn);
	// printf("%d\n", primeCount);
	int a = 0;
	int b = 0;


	while(scanf("%d %d", &a, &b) != EOF){
		int count = 0;

		if(a < 2) a = 2;
		for(int i = a; i <= b; i++){
			if(isPrime(i)){
				count++;
				// printf("%d ", i);
			}
		}
		// printf("\n");

		printf("%d\n", count);
	}

	// printf("%d\n", primeCount);
	// for(int i = 0; i < primeCount; i++){
	//     printf("%d ", primeNum[i]);
	// }
	// printf("\n");
	// isPrime(7);
	// printf("%d %d %d\n", isPrime(6), isPrime(7), isPrime(4));
	return 0;
}
