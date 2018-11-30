#include <iostream>
using namespace std;

int ans[4]={1,2,3,4};
int n=4;
int guess[10000][4]={
	{1,1,4,5},
	{1,2,4,3},
	{1,1,4,4},
	{4,3,2,1}
};

int showInput(){
	cout << "   ans:\t";
	for(int i=0;i<4;i++) cout << ans[i] << ' ';
	cout << endl;
	cout << "guess:\n";
	for(int i=0;i<n;i++){
		cout <<'\t'<<i+1<<": ";
		for(int j=0;j<4;j++){
			cout<<guess[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}

int initGuess(){
	for(int i=0;i<n;i++){
		int array[10]={};
		for(int j=0;j<4;j++){
			if(!array[guess[i][j]]){
				array[guess[i][j]]++;
			}else{
				guess[i][j]=-1;
			}
		}
	}
	return 0;
}

int main(){
	/*
	for(int i=0;i<4;i++) cin>>ans[i];
	cin  >> n;
	for(int i=0;i<n;i++)
		for (int j=0;j<4;j++)
			cin  >> guess[i][j];
	*/
	initGuess();
	for(int i=0;i<n;i++){
		int a=0;
		int b=0;
		for(int j=0;j<4;j++){
			if (guess[i][j]==ans[j]){
				a++;
				continue;
			}
			for(int k=0;k<4;k++){
				if (guess[i][j]==ans[k]){
					b++;
					break;
				}
			}
		}
		cout<<a<<"A"<<(b)<<"B"<<endl;
	}
	showInput();
	return 0;
}
