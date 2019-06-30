#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,i,store,count;
    cin>>n;
    int freq[n];

    string s,j;
    cin>>s;
    memset(freq, 0, sizeof(freq)); 
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //j = s;
    //cout<<j;
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
        //cout<<freq[s[i] - 'a'];
        if(freq[s[i] - 'a'] ==1){
           count++;
        }
        
    }





   //cout<<"count is = "<<count;

    for(i=0;i<n;i++){
        if(freq[s[i] - 'a'] >=1){
        store++;

        }
    }
     
     
     //cout<<"\nstore is ="<<store<<endl;
    if(count>=26){
        cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
    return 0;
}