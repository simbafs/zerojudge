#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char m[19132]={};
	char c[20000]={};
	cout << "commit massage? ";
	cin  >>m;
	system("git add *");
	sprintf(c,"git commit -m \"%s\"",m);
	system(c);
	return 0;
}
