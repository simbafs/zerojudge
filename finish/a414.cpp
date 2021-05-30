#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	while(scanf("%d", &a) != EOF){
		if(a == 0) break;

		int r = 0;
		while(a % 2) {
			r++;
			a /= 2;
		}

		printf("%d\n", r);
	}
	return 0;
}
