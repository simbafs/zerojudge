#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	while(cin >> a){
		bool flag = true;
		for(int i=0,j=a.length()-1; i<=j; i++,j--){
			if(a[i] != a[j]) flag = false;
		}
		if(flag){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
	return 0;	
}
