#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string.h>
using namespace std;


int main()
{
    //freopen("A.txt","r",stdin);
    long long int n;
    cin>>n;
    long long int A[n],i;
    cin>>A[0];
    long long int Min = A[0],cnt = 0,Max = A[0];
    for(i=1;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>Max)
            cnt++,Max = A[i];
        if(A[i]<Min)
            cnt++,Min = A[i];
        //cout<<A[i]<<" "<<cnt<<"\n";

    }

    cout<<cnt<<"\n";
    return 0;
}
