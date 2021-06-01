#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	for(; n > 0; n--){
		int m = 0;
		cin >> m;

		vector<pair<int, int>> tree;
		int root = 0;
		bool leaf[m] = {};
		for(int i = 0; i < m; i++) leaf[i] = true;

		for(int i = 0; i < m; i++){
			int a = 0;
			int b = 0;
			scanf("%d,%d", &a, &b);
			tree.push_back(make_pair(a, b));
			if(b == 99) root = a;
			else leaf[b] = false;
		}

		// for(auto i : tree){
		//     printf("node: %d, parent: %d\n", i.first, i.second);
		// }
		// for(bool i : leaf){
		//     printf("> %d\n", i);
		// }
		// printf("root: %d\n", root);
		//

		for(int i = 0; i < m; i++){
			if(!leaf[i]) continue;

			int nowNode = tree[i].second;
			// cout << "nowNode: " << nowNode << '\n';
			if(nowNode == 99 || tree[nowNode].second == 99) printf("%d:N\n", i);
			else {
				printf("%d:{", i);
				while(tree[nowNode].second != 99){ // find until root
					printf("%d", nowNode);
					nowNode = tree[nowNode].second;
					if(tree[nowNode].second != 99) printf(",");
				}
				printf("}\n");

			}

			// for(int i : path) printf("%d ", i);
			// printf("\n");

		}
		printf("\n");
	}

	return 0;
}

/**
 *	0
 *	|
 *	5--
 *	|  \
 *	6  |
 *	|  3--
 *	4  |  \
 *	   2  |
 *        1
 */
