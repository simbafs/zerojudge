#include <iostream>

using namespace std;

int array[100] = {};
int n = 10;

int qs(int,int);
int ex(int*,int*);

int main(){
	for(int i=0; i<n; i++) cin >> array[i];
	
	cout << "         ";
	for(int i=0; i<n; i++) cout << i << ' ';
	cout << endl;
	cout << "         ";
	for(int i=0; i<n; i++) cout <<  array[i] << ' ';
	cout << endl;
	
	qs(0,n-1);
	for(int i=0; i<n; i++) cout <<  array[i] << ' ';
	cout << endl;
	return 0;
}

int qs(int head, int tail){
	if(head < tail && tail-head <= 2){
		if(array[tail] > array[head]){
			ex(array+head,array+tail);
		}
		return 0;
	}
	if(head >= tail){
		return 0;
	}
	int flag = (head+tail)/2;
	int* indexh = array+head;
	int* indext = array+tail;
	while(*indexh < array[flag]) indexh++;
	while(*indext > array[flag]) indext--;
	ex(indexh,indext);

	cout << head << ' ' << tail << ' ' << flag << " >> ";
	for(int i=0;i<n;i++) cout << array[i] << ' ';
	cout << endl;
	
	qs(head,flag-1);
	qs(flag+1,tail);
	return 0;
}

int ex(int* a,int* b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
	return 0;
}
