#include <iostream>

using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		int num[1000] = {};
		for(int i = 0; i < n; i++) cin >> num[i];
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(num[i] > num[j]){
					num[i] ^= num[j];
					num[j] ^= num[i];
					num[i] ^= num[j];
				}
			}
		}
		for(int i = 0; i < n; i++) cout << num[i] << (i == n-1?'\n':' ');
	}
	return 0;
}
