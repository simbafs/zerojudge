#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int id;
	int day;
	vector <int> next;
	int n;
};

/*
int count(vector <Node> pro, int start){
	int sum = 0;

	int size = pro.size();
	for(int i = start; i < size; i++){
		Sum += pro[i].day;
		if(pro[i].n == 0){
			return sum;
		}else if(pro[i].n > 1){
			
		}
	}

	return sum;
}
*/

int main(){
	int _n;
	cin >> _n;
	for(int _i = 0; _i < _n; _i++){
		int sum = 0;
		int n;
		vector <Node> pro;
		cin >> n;
		for(int i = 0; i < n; i++){
			Node a;
			cin >> a.day >> a.n;
			a.id = i+1;
			for(int j = 0; j < a.n; j++){
				int tmp;
				cin >> tmp;
				a.next.push_back(tmp);
			}
			pro.push_back(a);
		}
		
		vector <Node> wolking;
		wolking.push_back(pro[0]);
		while(1){
				
		}


		printf("%d\n", sum);

		// print
		/*
		printf("print\n");
		for(auto i:pro){
			printf("%d %d %d: ", i.id, i.day, i.n);
			for(auto j:i.next){
				printf("%d ", j);
			}
			printf("\n");
		}
		printf("end prinf\n");
		*/
	}
}
