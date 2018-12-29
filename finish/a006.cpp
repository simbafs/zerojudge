#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int s[3]={};
	int a=0;
	int b=1;
	int c=2;
	int d=0;
	while(cin >> s[0] >> s[1] >> s[2]){
		d=s[b]*s[b]-4*s[a]*s[c];
		if(d == 0){
			cout << "Two same roots x=" 
					 << -s[b]/(2*s[a])
					 << endl;
		}else if(d < 0){
			cout << "No real root" << endl;
		}else{
			cout << "Two different roots x1="
					 << (-s[b]+sqrt(d))/2*s[a]
					 << " , x2="
					 << (-s[b]-sqrt(d))/2*s[a]
					 <<endl;
		}
	}
	return 0;
}
