#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool comparer(string a, string b){
	// negitave
	if(a[0] == '-' && b[0] == '-'){
		a[0] = '0';
		b[0] = '0';
		string c;
		c = a;
		a = b;
		b = c;
	}else if(a[0] == '-' && b[0] != '-'){
		return true;
	}else if(a[0] != '-' && b[0] == '-'){
		return false;
	}

	if(a == b) return false;
	if(a.length() != b.length()) return a.length() < b.length();
	int len = a.length();
	for(int i = 0; i < len; i++){
		if(a[i] != b[i]) return a[i] < b[i];
	}
	return false;
}

int main(){
	// vector<string> nums = {"-45454545", "-2", "10"};
	// sort(nums.begin(), nums.end(), comparer);
	// for(auto i:nums){
	//     cout << i << '\n';
	// }

	int a = 0;
	while(scanf("%d", &a) != EOF){
		vector<string> nums = {};
		for(int i = 0; i < a; i++){
			string tmp;
			cin >> tmp;
			nums.push_back(tmp);
		}
		sort(nums.begin(), nums.end(), comparer);
		for(auto i:nums){
			cout << i << '\n';
		}
	}
	return 0;
}
