#include <iostream>

using namespace std;

int main()
{
  int n,p[101]={0},max=0,a=0,b=0,c;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>p[i];
  }
  for(int j=0;j<n;j++){
      if(p[j]>max){
          max=p[j];
      }
  }
  
  for(int k=0;k<n;k++){
      if(p[k]==max){
          b++;
         
      }
      
      else{
          a=a+p[k];
      }
  }
  
  if(b>0){
    c=max/2;
    while(b>1){
        c=c+max;
        b--;
    }
    a=a+c;
    cout<<a;
  }
  else{
  a=a+max;
  cout<<a;
  }
    return 0;
}
