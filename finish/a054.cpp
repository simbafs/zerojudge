#include <iostream>
#include <cmath>

using namespace std;

int tab(char);
int thedigit(int,int);
int main(){
	int id = 0;
	int muti[10]={1,9,8,7,6,5,4,3,2,1};
	while(cin >> id){
		int sum = 0;
		for(int i=0; i<8; i++) sum += thedigit(id,9-i)*muti[i+2];
		for(char i='A'; i<='Z'; i++){
			sum += thedigit(tab(i),1)*9 
		}
	}
	
	return 0;
}


int thedigit(int i,int n){
	return 	(int)(i/pow(10,n-1))%10;
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
