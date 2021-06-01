#include <iostream>

using namespace std;

int main(){
	int a1= 0;
	int b1 = 0;
	int a2= 0;
	int b2 = 0;
	int a3 = 0;
	int b3 = 0;
	int possible = 0;

	cin >> a1 >> b1;
	possible = b1;


	cin >> a2 >> b2;
	while(possible % a2 != b2){
		possible += a1;
	}
	// printf("%d\n", possible);

	cin >> a3 >> b3;
	while(possible % a3 != b3){
		possible += a1 * a2;
	}

	printf("%d\n", possible);

	
	return 0;
}

/**
 *	x = a1 * k1 + b1
 *	  = a2 * k2 + b2
 *	  = a3 * k3 + b3
 */
