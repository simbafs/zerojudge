#include <iostream>
using namespace std;
int main(){
	int n=6;
	int k=5;
	int w=1;
	int all=0;
	cin >> n >> k >> w;
	all=n;
	while(n>k){
		n+=w-k;
		all+=w;
	}
	cout << all << endl;
	return 0;
}
