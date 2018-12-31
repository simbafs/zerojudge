#include <iostream>
#include <cmath>

using namespace std;

int digit(int);
int thedigit(int,int);

int main(){
	int a = 0;
	int b = 0;
	while(cin >> a >> b){
		bool flag = false;
		for(int i=a; i<=b; i++){
			int test=0;
			for(int j=1; j<=digit(i); j++){
				test += pow(thedigit(i,j),digit(i));
			}
			if(test == i){
				cout << i << ' ';
				flag = true;
			}
		}
		if( !flag ){
			cout << "none" << endl;
		}else{
			cout << endl;
		}
	}
	
	return 0;
}

int digit(int a){
	int re=0;
	if(a == 0) return 1; 
	for(;a>0;a/=10,re++);
	return re;
}

inline int thedigit(int a, int n){
	return ((int)(a/pow(10.0,(double)n-1))%10);
}
