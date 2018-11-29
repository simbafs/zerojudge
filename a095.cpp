#include <iostream>
using namespace std;
int main(){
  int n=0;
  int m=0;
  while(cin  >> n >> m){
    cout <<((n==m)?m:m+1) << endl;
  }
  return 0;
}
