#include <iostream>

using namespace std;

int main(){
	int a = 0;
	int b = 0;
	int re = 0;
	while(cin >> a >> b){
		re = 0;
		if(a == 1) a++;
		if(b == 1) b++;
		for(int i = a; i <= b; i++){
//			cout << i << endl;
			if(i == 2 || i == 3){
				re ++;
//				cout << "\t\t\t" << i << endl;
				continue;
			}
			for(int j = 2; j*j <= i; j++){
//				cout << "\t" << j << endl;
				if(i%j == 0){
//				cout << "\t" << i << "%" << j << " == 0" << endl; 
					break;
				}else if(j*j <= i && (j+1)*(j+1) > i && i%j != 0){
					re ++;
//					cout << "\t\t\t" << i << endl;
				}
			}
		}
		cout << re << endl;
	}
	return 0;
}
