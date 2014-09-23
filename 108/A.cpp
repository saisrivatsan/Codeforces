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


    int m,n,i,ans=0,j,j0;
    cin>>m>>n;
    char str[m][n];
    vector <int> best(m,0);

    for(i=0;i<m;i++)
        cin>>str[i];

    for(i=0;i<n;i++)
    {

        j0 = 0;
        for(j=0;j<m;j++)
            if(str[j][i]>str[j0][i])
                j0 = j;

        for(j=0;j<m;j++)
            if(str[j][i]==str[j0][i])
                best[j]=1;
        //cout<<"\n";
    }



    for(i=0;i<m;i++)
        if(best[i])
            ans++;

    cout<<ans<<"\n";
}
