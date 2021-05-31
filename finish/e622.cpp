#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int CPIncrease(int iv){
	if(0 <= iv && iv <= 29) return 10;
	else if(30 <= iv && iv <= 39) return 50;
	else return 100;
}

int main(){
	int n = 0;
	int s = 0;
	int maxcp = 0;
	int maxindex = 0;
	cin >> n >> s;
	s /= 1000;

	// printf("s = %d\n", s);
	for(int i = 0; i < n; i++){
		int cp = 0;
		int iv = 0;
		cin >> cp >> iv;
		iv = CPIncrease(iv);

		cp += s*iv;
		// printf("index=%d cp=%d iv=%d\n", i+1, cp, iv);
		if(cp > maxcp){
			maxcp = cp;
			maxindex = i+1;
		}
	}

	printf("%d %d", maxindex, maxcp);
	
	return 0;
}
