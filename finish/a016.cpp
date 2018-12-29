#include <iostream>

using namespace std;

int log(const char a[]){
	cout << "> debug: " << a << endl;
	return 0;
}

int log(int a){
	cout << "> debug: " << a << endl;
	return 0;
}

int main(){

	int a[9][9]={{}};
	while( cin  >> a[0][0] >> a[0][1] >> a[0][2] >> a[0][3] >> a[0][4] >> a[0][5] >> a[0][6] >> a[0][7] >> a[0][8]  ){
		bool flag=true;
		for( int i=1; i<9; i++ ){
			for( int j=0; j<9; j++ ){
				cin >> a[i][j];
			}
		}
		/*
		for( int i=0; i<9; i++ ){
			for( int j=0; j<9; j++ ){
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
		*/
		//橫向
		for( int j=0; j<9; j++ ){
			int sum = 0;
			for( int i=0; i<9; i++ ){
				sum += a[j][i];
			}
			if( sum != 45 ) flag = false;
		}
		//直向
		for( int j=0; j<9; j++ ){
			int sum=0;
			for( int i=0; i<9; i++ ){
				sum+=a[i][j];
			}
			if( sum != 45 ) flag = false;
		}
		//方塊
		for( int x=0; x<9; x+=3){
			for( int y=0; y<9; y+=3){
				int sum = 0;
				for( int i=0; i<3; i++){
					for( int j=0; j<3; j++){
						sum += a[x+i][y+j];
					}
				}
				if( sum != 45 ) flag = false;
			}
		}


		cout << (flag==1?"yes":"no") << endl;
	}
	return 0;
}
