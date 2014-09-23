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
    int n,flag1=0,flag2=0,i;
    string str;
    cin>>n;
    n = n*2;
    cin>>str;
    int A[n];
    for(i=0;i<n;i++)
        A[i] = str[i]-'0';
    sort(A,A+n/2);
    sort(A+n/2,A+n);
    for(i=0;i<n/2;i++)
        if(A[i]>A[i+n/2])
            flag1++;
        else if(A[i]<A[i+n/2])
            flag2++;


    if((flag1==n/2) || (flag2==n/2))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

