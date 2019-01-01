#include <iostream>

using namespace std;

int num[100] = {};
int n = 10;

int qs(int,int);
int ex(int*,int*);

int main(){
	for(int i=0; i<n; i++) cin >> num[i];
	
	cout << "         ";
	for(int i=0; i<n; i++) cout << i << ' ';
	cout << endl;
	cout << "         ";
	for(int i=0; i<n; i++) cout <<  num[i] << ' ';
	cout << endl;
	
	qs(0,n-1);
	for(int i=0; i<n; i++) cout <<  num[i] << ' ';
	cout << endl;
	return 0;
}

int qs(int head, int tail){
	if(head < tail && tail-head <= 2){
		if(num[tail] > num[head]){
			ex(num+head,num+tail);
		}
		return 0;
	}
	if(head >= tail){
		return 0;
	}
	int flag = (head+tail)/2;
	int* indexh = num+head;
	int* indext = num+tail;
	while(indexh <= indext){
		while(*indexh < num[flag]) indexh++;
		while(*indext > num[flag]) indext--;
		ex(indexh,indext);
		
		cout << indexh-num << ' ' << indext-num << ' ' << flag << " <> ";
		for(int i=0;i<n;i++) cout << num[i] << ' ';
		cout << endl;
	}

	
	cout << head << ' ' << tail << ' ' << flag << " >> ";
	for(int i=0;i<n;i++) cout << num[i] << ' ';
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
