#include <iostream>

using namespace std;

int tab(char);

int main(){
	char id[11] = {};
	while(cin >> id){
		int out=0;
		int ID[11]={};
		int weight[11]={1,9,8,7,6,5,4,3,2,1,1};
		ID[0] = tab(id[0])/10;
		ID[1] = tab(id[0])%10;
//		cout << id[0] << ' ' << tab(id[0]) << endl;
//		cout << ID[0] << ID[1]  << endl;
		for(int i=0; i<9; i++ ){
			ID[i+2] = id[i+1] - 48;
		}
		for(int i=0; i<11; i++){
			out += ID[i]*weight[i];
		}
//		cout << out << endl;
		if( !(out%10) ){
			cout << "real" << endl;
		}else{
			cout << "fake" << endl;
		}
	}
	return 0;
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
		case 'w':
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

