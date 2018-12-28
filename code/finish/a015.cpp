#include <iostream>

using namespace std;

int main(){
	int n=0;
	int m=0;
	int a[100][100]={{}};
	while(cin >> n >> m){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout <<  a[j][i] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
