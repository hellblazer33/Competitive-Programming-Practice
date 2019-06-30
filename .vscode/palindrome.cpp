#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s = to_string(a);
        string s2 = s;
        reverse(s.begin(),s.end());
        if(s==s2){
            cout<<"wins"<<endl;
        }
        else cout<<"losses"<<endl;

    }
    return 0;
}