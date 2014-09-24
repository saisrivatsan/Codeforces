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
    int n,k,v,l,r,s,m;
    cin>>n>>k;
    l = 0;r = n;
    while(l<r)
    {
        m = (l+r)/2;
        s=0;
        while(m)
        {
            s+=m;
            m = m/k;
        }

        if(s>=n)
            r = (l+r)/2;
        else
            l = (l+r)/2+1;
    }

    cout<<r<<"\n";
    return 0;
}

