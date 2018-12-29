#include <iostream>

using namespace std;

int main(){
	int m=0;
	int d=0;
	while(cin >> m >> d){
		switch((m*2+d)%3){
			case 0:
				cout << "普通" << endl;
				break;
			case 1:
				cout << "吉" << endl;
				break;
			case 2:
				cout << "大吉" << endl;
				break;
		}
	}
	return 0;
}
