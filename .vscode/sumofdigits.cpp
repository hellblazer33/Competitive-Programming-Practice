#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,i,sum=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
       // cout<<s; 
       // cout<<s.length();
        for(i=0;i<s.length();i++){
            sum += s[i] - '0';
            
        }
        cout<<sum;
        sum = 0;
        cout<<endl;
    }
    return 0;
}