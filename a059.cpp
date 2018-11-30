#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n=0;
  int ab[100][2]={{}};
  cin  >> n;
 	for (int i=0;i<n;i++) cin>>ab[i][0]>>ab[i][1];
	for (int i=0;i<n;i++){
    float a,b;
    int re=0;
		a=ab[i][0];
		b=ab[i][1];
    a=sqrt(a);
    b=sqrt(b);
		for(int i=((int)a==a?a:a+1);i<=b;i++){
			re+=i*i;
		}
		cout <<"Case " << i+1 << ": " <<  re << endl;
  }
	return 0;
}

