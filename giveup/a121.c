#include <stdio.h>

int init();
int isNotPrime(int);

int pn[100000] = {2,3,5};
int index = 3;

int main(){
	init();
	return 0;
}

int init(){
	for(int i = 7,j = 2; i < 100000000; j = 6 - j, i += j){
		if(!isNotPrime(i)){
			(pn[index++] = i);
		}
	}
	return 0;
}

int isNotPrime(int n){
	printf("%d %d\n",n,index);
	for(int i = 0; i*i < pn[index-1] && i*i < n; i++){
		if(!(n % pn[i])) return 1;
	}
	return 0;
}

/*

-- 2  3  -- 5  -- 7  -- -- --
11 -- 13 -- -- -- 17 -- 19 --
-- -- 23 -- -- -- -- -- 29 -- 
31 -- -- -- -- -- 37 -- -- --
41 -- 43 -- -- -- 47 -- -- -- 
-- -- 53 -- -- -- -- -- 59 --
61 -- -- -- -- -- 67 -- -- -- 
71 -- 73 -- -- -- -- -- 79 --
-- -- 83 -- -- -- -- -- 89 --
-- -- -- -- -- -- 97 -- -- -- 

*/
