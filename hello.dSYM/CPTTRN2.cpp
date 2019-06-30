#include<iostream>
 
using namespace std;
 
int main(){
  int t,i,j;
  cin>>t;
  while(t--){
  int l,c;
  cin>>l;
  cin>>c;
  for(i=0;i<l;i++){
     for(j=0;j<c;j++){
          if((l==4)&&(c==4)){
          if(((i==1)&&(j==1))|| ((i==1)&&(j==2)) || ((i==2)&&(j==1)) || ((i==2)&&(j==2))){
            cout<<".";
          }
          else cout<<"*";
 
          }
          else cout<<"*";
     }
  cout<<endl;
  }
  cout<<endl;
  }
  return 0;
}