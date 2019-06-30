#include<iostream>

using namespace std;

int main(){
    int p,q;
    cin>>p;
    cin>>q;

    // if( (p==0)&&(q==0)) || ((p == 1) && (q==1)){
    //     cout<<"0"<<endl;
    // }
     if(((p==0)&&(q==1))||((p == 1) && (q==0))){
        cout<<"1"<<endl;
    }

    if(((p==0)&&(q==0)) || ((p == 1) && (q==1))){
        cout<<"0"<<endl;
    }
    return 0;
}