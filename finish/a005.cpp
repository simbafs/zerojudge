#include <iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	for(int j=0;j<n;j++){
		int list[4]={};
		int x[3]={};
		int b[3]={};
		for(int i=0;i<4;i++) cin >> list[i];
		for(int i=0;i<3;i++){
			x[i]=list[i+1]-list[i];
			b[i]=list[i+1]/list[i];
		}
		if(x[0]==x[1] && x[1]==x[2]){
			for(int i=0;i<4;i++) cout << list[i] << ' ';
			cout << list[3]+x[0] << endl;
		}else{
			for(int i=0;i<4;i++) cout << list[i] << ' ';
			cout << list[3]*b[0] << endl;
		}
	}
}
