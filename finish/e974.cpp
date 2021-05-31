#include <iostream>

using namespace std;

int classroom[100][100] = {};
int r = 0;
int c = 0;
int n = 0;

void printClassroom(){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("%d%s", classroom[i][j], j == c-1 ? "" : " ");
		}
		if(i != r-1) printf("\n");
	}
}

int main(){
	cin >> r >> c >> n;
	int p = r * c;	// number of people
	int x = 0;	// c
	int y = 0;	// r
	if(n%2){
		y = (n-1)/2;
		x = y;
	}else{
		y = (n-2)/2;
		x = y + 1;
	}

	x %= c;
	y %= r;

	int k = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			// printf("x=%d y=%d i=%d\n", (c+x+j)%c, (r+y+i)%r, k);
			classroom[(r+y+i)%r][(c+x+j)%c] = k;
			k++;
		}
	}

	// for(int i = 1; i <= p; i++){
	//     printf("x=%d y=%d i=%d\n", x, y, i);
	//     classroom[y][x] = i;
	//     x = (x+1)%c;
	//     if(x == 0) y = (y+1)%r;
	// }

	printClassroom();
	return 0;
}

/**
 *  wn -> c, r
 *
 *	w1 -> 0, 0
 *	w2 -> 0, 1
 *	w3 -> 1, 1
 *	w4 -> 1, 2
 *	w5 -> 2, 2
 *
 *	if(w%2 == 1){
 *		c = (n-1) / 2;
 *		r = c;
 *	}else{
 *		c = (n-2)/2
 *		r = c + 1;
 *	}
 *
 *
 */
