#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
	int n = 0; // how many input
	while(cin >> n && n != 0){
		while(1){
			bool canFinish = true;
			bool shouldOut = false;
			stack<int> station;
			int next = 2;
			int train = 0;
			station.push(1);

			for(int i = 0; i < n; i++){
				cin >> train;
				if(train == 0){
					shouldOut = true;
				//	cout << "out\n";
					break;
				}
				while(next <= n && (station.empty() || station.top() != train)){
					station.push(next++);
				//	cout << "move a train to station\n";
				}
				if(station.empty() || station.top() != train){
					canFinish = false;
				//	cout << "can't finish\n";
				}else{
				//	cout << "pop one train from station\n";
					station.pop();
				}
			}
			if(shouldOut) break;

			if(canFinish){
				cout << "Yes\n";
			}else{
				cout << "No\n";
			}
		}
		cout << '\n';
	}
	return 0;
}
