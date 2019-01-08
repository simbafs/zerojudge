#include <iostream>

using namespace std;

int num[100] = {};
int n = 10;

int qs(int,int,int*);
int ex(int*,int*);

int main(){
	return 0;
}


int qs(int head,int tail,int ar[]){
	if(head >= tail) return 0;
	if(head-tail <= 2){
		if(ar[head] >= ar[tail]){
			ex(ar+head,ar+tail);
		}
		return 0;
	}
	int flag = at[(head+tail)/2];
	

	return 0;
}

int ex(int* a,int* b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
	return 0;
}
