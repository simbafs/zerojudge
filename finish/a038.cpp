#include <iostream>

using namespace std;

int main(){
	int a = 0;
	cin >> a;
	if(a){
		while(a%10==0){
			a/=10;
		}
		while(a){
			cout << a%10;
			a/=10;
		}
	}else{
		cout << 0;
	}
	cout << endl;
	return 0;
}
