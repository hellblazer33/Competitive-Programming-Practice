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
                cout<<"*";
        
            if((i+j)%2!=0){
                    cout<<".";
                }
            }
            cout<<endl;
            }
        }
    return 0;
}           