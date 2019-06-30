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
      reverse(s.begin(), s.end()); 
      cout<<s<<endl;;
      }
      return 0;
}

