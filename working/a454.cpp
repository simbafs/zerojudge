#include <iostream>
#include <vector>

using namespace std;

int main(){
	int _n;
	cin >> _n;
	for(int _i; _i < _n; _i++){
		int data[1005][1005] = {{}};
		int last;
		int b; // biggest
		int n;
		int dis[1005] = {};
		cin >> n;
		for(int i = 0; i < n; i++){
			int dis, next;
			cin >> dis >> next;
			if(next == 0) last = dis;
			for(int j = 0; j < next; j++){
				int tmp;
				cin >> tmp;
				data[i][tmp - 1] = dis;
			}
		}

		for(int i = 1; i < n; i++){
			for(int j = 1; j < n; j++){
				if(i == j || data[i][j] == 0) continue;
				if(data[i][j] + data[0][i] > data[0][j]){
					data[0][j] = data[i][j] + data[0][i];
					if(data[0][j] > b) b = data[0][j];
				}
			}
		}

		/*
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) printf("%d ", data[i][j]);
			printf("\n");
		}
		*/

		printf("%d\n", b + last);
	}
	return 0;
}
