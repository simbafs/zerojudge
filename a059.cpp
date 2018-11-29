#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int n=0;
  int ab[100][2]={{}};
  cin  >> n;
  for (int i=0;i<n;i++){
    float a,b;
    cin  >>a>>b;
    a=sqrt(a);
    b=sqrt(b);
    cout <<a<<' '<<b<<endl;
  }
}

