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
    long int n,i,j,cnt = 0,t;
    cin>>n;
    vector <int> R(n,0), C(n,0);

    for(i=0;i<n;i++)
        for(j=0;j<n && cin>>t;j++)
            R[i]+=t,C[j]+=t;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(R[i]>C[j])
                cnt++;

    cout<<cnt<<"\n";
    return 0;
}


