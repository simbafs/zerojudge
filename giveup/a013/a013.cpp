#include <stdio.h>
#include <stdlib.h>

/**
 *	turn roma number digit to int
 */
int romaNum(char r){
	switch(r){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
	}
}

/**
 *	turn roma number string to int
 */
int romaNumToInt(char *roma, int len){
	int ans = 0;
	ans += romaNum(roma[0]);
	for(int i = 1; i < len-1; i++){
		int p = romaNum(roma[i-1]);
		int t = romaNum(roma[i]);
		int n = ///?

	}
	return ans;
}

int main(){
	// char s[] = "MCMXCVIII";
	char s[] = "MCM";
	// 1000 100 1000 10 100 5 1 1 1
	// 1000 + 100 
	printf("%d\n", romaNumToInt(s, sizeof(s)));


	char ra[4005] = "";
	char rb[4005] = "";
	while(scanf("%s %s", ra, rb) != EOF){
		int a = romaNumToInt(ra, sizeof(ra));
		int b = romaNumToInt(rb, sizeof(rb));
		printf("|%d - %d| = %d\n", a, b, abs(a-b));
	}
	return 0;
}
