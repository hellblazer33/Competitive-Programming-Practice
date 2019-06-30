#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    int i,half;
    cin>>s;
    int l = s.length();
    half = l/2 - 1;
    cout<<s[0];
    for(i=1;i<=half;i++){
       if(i%2==0){
           cout<<s[i];
       }
    }
    cout<<endl;
    }
    return 0;
}