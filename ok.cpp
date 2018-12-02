#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc,char* argv[]){
	char m[999999]={};
	char c[999999]={};
	char ans;
	if(argc>1){
		for(int i=0;i<argc;i++) sprintf(m,"%s",argv[i]);
	}else{
		sprintf(m,"change some files");
	}
	sprintf(c,"git commit -m \"%s\"",m);
	cout << ">git add *" << endl;
	cout << ">" << c << endl;
	cout <<">y/n? ";
	cin >> ans;
	if(ans=='y' || 'Y'){
		system("git add *");
		system(c);
	}
	return 0;
}
