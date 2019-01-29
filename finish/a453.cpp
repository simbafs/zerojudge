#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			int a = 0;
			int b = 0;
			int c = 0;
			int D = 0;
			cin >> a >> b >> c;
			D = b*b-4*a*c;
			if(sqrt(D) - (int)sqrt(D)  == 0) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
	return 0;
}
