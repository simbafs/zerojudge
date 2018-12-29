#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n=0;
		while(cin >> n){
		bool first=true;
		int limited=n;
		for(int i=2;i<=limited;i++){
			int num=0;
			while(n%i==0){
				n/=i;
				num++;
			}
			if(!first && num){
				cout << " * ";
			}else if(num){
				first=false;
			}
			if(num>0) cout << i;
			if(num>1) cout << "^" << num;
		}
		cout << endl;
	}
	return 0;
}
