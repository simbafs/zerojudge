#include <iostream>

using namespace std;

int main(){
	int a = 0;
	cin >> a;
	while(a){
		cout << a%10;
		a/=10;
	}
	cout << endl;
	return 0;
}
