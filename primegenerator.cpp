#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if(n == 1)
    {
        return false;
    }
    
    if(n == 2 || n== 3 || n==5 || n == 7)
    {
        return true;
    }
    
    int rootn = sqrt(n);
    
    for(int i=2;i<=rootn;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main() {
	int testcases;
	cin >> testcases;
	
	while(testcases--)
	{
	    int a,b;
	    
	    scanf("%ld %ld", &a, &b);
	    
	    for(int k=a; k<=b;k++)
	    {
	        if(k & 1 || k==2)
	        {
                if(isPrime(k))
                {
                    printf("%llu\n", k);
                }   
	        }
	    }
	    
	    if(testcases != 0)
	    {
	        cout <<  endl;   
	    }
	}
	
	return 0;
}
