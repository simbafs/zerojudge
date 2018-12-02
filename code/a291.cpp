#include <iostream>

using namespace std;
os_base::sync_with_stdio(false);

cin.tie(NULL);

int ans[4]={1,2,3,4};
int n=4;
int guess[10000][4]={
	{1,1,4,5},
	{1,2,4,3},
	{1,1,4,4},
	{4,3,2,1}
};

int isAppearFirst(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]==a[n]) return 0; 
	}
	return 1;
}

int showInput(){
	cout << "ans:\t ";
	for(int i=0;i<4;i++) cout << ans[i] << ' ';
	cout << endl;
	cout << "guess:\n";
	for(int i=0;i<n;i++){
		cout <<'\t'<<i+1<<":   ";
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
	while(!cin.eof()) {
	  cin>>ans[0]>>ans[1]>>ans[2]>>ans[3];
		cin  >> n;
		for(int i=0;i<n;i++){
			for (int j=0;j<4;j++){
				cin  >>guess[i][j];
			}
		}
		for(int i=0;i<n;i++){
			int a=0;
			int b=0;
			int marked[10]={};//stat of num
			for(int j=0;j<4;j++){ // a
				if(guess[i][j]==ans[j]){
					a++;
					marked[guess[i][j]]=1;//this num has been marked
	//				cout<<"debug: A: guess["<<i<<"]["<<j<<"]"<<endl;
				}
			}
	
			// b
			for(int j=0;j<4;j++){		//guess
				if(marked[guess[i][j]]==1) continue;
				for(int k=0;k<4;k++){	//ans
					if(guess[i][j]==ans[k] && j!=k){
						b++;
						marked[guess[i][j]]=1;
					}
				}
			}
	
			cout<<a<<"A"<<(b)<<"B"<<endl;
		}
	}
	
	//	showInput();
	return 0;
}
