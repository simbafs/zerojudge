#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0;
	while(scanf("%d", &a) != EOF){
		if(a == 0) break;
		for(int i = 1; i < a; i++){
			if(i%7) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
