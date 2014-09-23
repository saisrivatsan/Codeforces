#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
    // freopen("A.txt","r",stdin);
    long int i,s=0,s2 = 0,n;
    cin>>n;
    int A[n];
    for(i=0;i<n&&cin>>A[i];i++)
        s+=A[i];

    sort(A,A+n);
    for(i=n-1;i>=0;i--)
    {
        s2 += A[i];
        if(s2*2>s)
        {
            cout<<n-i<<"\n";
            return 0;
        }
    }
}


