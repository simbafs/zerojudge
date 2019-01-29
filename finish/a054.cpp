#include <iostream>
#include <cmath>

using namespace std;

int tab(char);
int digit(int,int);

int main(){
	int id = 0;
	while(cin >> id){
		int weight[10]={1,9,8,7,6,5,4,3,2,1};
		int SUM = 0;
		//130245675
		//987654321
		for(int i = 2; i< 10; i++){
			SUM += digit(id,11-i) * weight[i];
		}
//		cout << "> debug SUM = " << SUM << endl;
		for(char i = 'A'; i <= 'Z'; i++){
			int sum = SUM;
			sum += digit(tab(i),1)*9 + digit(tab(i),2)*1;
//			cout << "> debug i = " << i << " = " << tab(i) << " sum = " << sum << endl;
			if((sum + digit(id,1)) % 10 == 0) cout << (char)i;
		}
		cout << endl;
	}
	return 0;
}

int digit(int a,int n){
	//10243
	return (int)(a/pow(10,(n-1)))%10;
}

int tab(char a){
	switch (a){
		case 'A':
			return 10;
		case 'B':
			return 11;
		case 'C':
			return 12;
		case 'D':
			return 13;
		case 'E':
			return 14;
		case 'F':
			return 15;
		case 'G':
			return 16;
		case 'H':
			return 17;
		case 'I':
			return 34;
		case 'J':
			return 18;
		case 'K':
			return 19;
		case 'L':
			return 20;
		case 'M':
			return 21;
		case 'N':
			return 22;
		case 'O':
			return 35;
		case 'P':
			return 23;
		case 'Q':
			return 24;
		case 'R':
			return 25;
		case 'S':
			return 26;
		case 'T':
			return 27;
		case 'U':
			return 28;
		case 'V':
			return 29;
		case 'W':
			return 32;
		case 'X':
			return 30;
		case 'Y':
			return 31;
		case 'Z':
			return 33;
	}
	return 0;
}

