#include <iostream>

using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		int a = 0;
		int b = 0;
		int c = 0;
		for(int i = 0; i < n; i++){
			int mod = 0;
			cin >> mod;
			mod %= 3;
			if(mod == 0) a++;
			else if(mod == 1) b++;
			else c++;
		}
		cout << a << ' ' << b << ' ' << c << endl;
	}
	return 0;
}
