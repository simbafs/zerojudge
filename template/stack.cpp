#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

double stack[65535]={};
int index=0;

int push(double);
int pull();
double top();

int main(){

}

int push(double n=0){
	stack[index++]=n;
	return 0;
}

int pull(){
	return stack[index++];
}

double top(){
	return stack[index];
}
