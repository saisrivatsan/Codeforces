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
    //freopen("A.txt","r",stdin);
    long int n;
    cin>>n;
    long int A[n];
    long int Max = 0,i,t;
    for(i=0;i<n&&cin>>t;i++)
        Max = max(Max,t);

    cout<<Max<<"\n";


    return 0;
}


