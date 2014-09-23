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
    freopen("A.txt","r",stdin);

    int n,s;
    cin>>n>>s;

    int i,a,b;
    vector <int> A;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<s || ((a==s)&&(b==0)) )
            if(b==0)
                A.push_back(100);
            else
                A.push_back(b);
    }
    sort(A.begin(),A.end());
    if(A.size()==0)
        cout<<"-1\n";
    else
        cout<<100-A[0]<<"\n";

    return 0;
}


