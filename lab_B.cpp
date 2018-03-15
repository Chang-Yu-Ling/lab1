#include<iostream>
using namespace std;
int main(){
  int n=0;
  cout<<"input n = ";
  cin>>n;
  cout<<"n = ";
  for(;n>1;){            //用for迴圈重複求n值
      cout<<n<<" ";
      if(n%2==1){n=3*n+1;}
      else if(n%2==0){n=n/2;}
  }cout<<n<<"\n";
  return 0;
}
