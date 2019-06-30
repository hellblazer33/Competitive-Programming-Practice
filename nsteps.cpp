#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y,sum;
        cin>>x>>y;
        sum = x + y;
        if((x%2==0)&&(y%2==0)){
        cout<<sum;
        }
        else cout<<"No Number";
        cout<<endl;

    }
    return 0;
}