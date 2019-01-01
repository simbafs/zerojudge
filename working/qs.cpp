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
	int flag = num[(head+tail)/2];
	int* indexh = num+head;
	int* indext = num+tail;
	while(indexh <= indext){
		while(*indexh <= flag) indexh ++;
		while(*indext > flag) indext --;
		ex(indexh,indext);
		indexh ++;
		indext --;

		cout << indexh-num << ' ' << indext-num << ' ' << flag << " <> ";
		for(int i=0;i<n;i++) cout << num[i] << ' ';
		cout << endl;
	}

	
	cout << head << ' ' << tail << ' ' << (head+tail)/2 << " >> ";
	for(int i=0;i<n;i++) cout << num[i] << ' ';
	cout << endl;
	cout << "indexh-num= " << indexh-num << endl
			 << "indext-num= " << indext-num << endl;
	qs(head,indexh-num-1);
	qs(indexh-num,tail);
	return 0;
}

int ex(int* a,int* b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
	return 0;
}
