#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int id;
	int day;
	vector <int> next;
	int n;
};

int count(vector <Node> pro, int start, int sum){
	printf("line 14: start: %d, sum: %d\n", start, sum);
	auto now = pro[start];
	sum += now.day;
	printf("line 18: start: %d, sum: %d\n", start, sum);
	printf("======\n");
	if(now.n == 0){
		printf("line 19: sum: %d\n", sum);
		return sum;
	}
	else if(now.n == 1) return count(pro, now.next[0], sum);
	else{
		printf("line 25: sum: %d\n", sum);
		int b = 0; // biggest
		for(int i = 0; i < now.n; i++){
			int t = count(pro, now.next[i], sum);
			printf("line 29: sum: %d, next: %d\n", sum, now.next[i]);
			if(t > b) b = t;
		}
		printf("line 32: sum: %d, b: %d\n", sum, b);
//		sum += b;
		return b;
	}
	return sum;


	/* 
	int size = pro.size();
	for(int i = start; i < size; i++){
		sum += pro[i].day;
		if(pro[i].n == 0){
			return sum;
		}else if(pro[i].n > 1){
			int biggest = 0;
			int size = pro[i].size();
			for(int j = 0; j < size; j++){
				printf("> i: %d, next: %d\n", i, pro[i][j]);
				int a = count(pro, j);
				if(a > biggest) biggest = a;
			}
			sum += biggest;
			return sum;
		}
	}
	*/
}

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
			a.id = i;
			for(int j = 0; j < a.n; j++){
				int tmp;
				cin >> tmp;
				a.next.push_back(tmp - 1);
			}
			pro.push_back(a);
		}
		
		printf("ok\n");
		printf("%d\n", count(pro, 0, 0));

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
