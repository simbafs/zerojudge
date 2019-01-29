#include <iostream>
#include <cmath>

using namespace std;

int main(){
	char pw[7];
	while(cin >> pw){
		for(int i = 0; i < 6; i++){
//			cout << (int)pw[i] << ' ' << (int)pw[i+1] << ' ';
			cout << (pw[i]>=pw[i+1]?(pw[i]-pw[i+1]):(pw[i+1]-pw[i]));
//			cout  << ' ' << endl;
		}
	cout << endl;
	}
	return 0;
}
