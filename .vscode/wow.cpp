#include<iostream>
using namespace std; 
  
// print function 
void printNTimes(char c, int n) 
{ 
    // character c will be printed n times 
    cout << string(n, c) << endl; 
} 
  
// driver code 
int main() 
{ 
    // no of times a character 
    // need to be printed 
    int n ;
    cin>>n;
    char c = 'o'; 
      
    // function calling 
    string s = string(n,c);
    cout<<"W"<<s<<"w";
    cout<<endl;
  
    return 0;  
} 