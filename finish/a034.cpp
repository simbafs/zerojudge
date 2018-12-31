#include <iostream>

using namespace std;

int main(int argc,char* argv[]){
	int a = 0;
	while(cin >> a){
		int b[32] = {};
		int i=0;
		for(;a; i++){
			b[i] = ( a & 1 );
			a/=2;
		}
		for(int j=i-1;j>=0;j--){
			cout << b[j];
		}
		cout << endl;
	}
	return 0;
}
