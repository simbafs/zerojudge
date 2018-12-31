#include <iostream>
#include <cmath>

using namespace std;

int digit(int);

int main(){
	int a=0;
	int b=0;
	cin >> a;
	cout << digit(a) << endl;
	return 0;
}

int digit(int a){
	int re=0;
	if(a == 0) return 1; 
	for(;a>0;a/=10,re++);
	return re;
}
