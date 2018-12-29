#include <iostream>

using namespace std;

int main(){
	bool first=true;
	char in;
	while(cin.get(in)){
		if ( in != '"'){
			cout << in;
		}else{
			if(first){
				cout << "``";
				first=!first;
			}else{
				cout << "''";
				first=!first;
			}
		}
	}
	return 0;
}
