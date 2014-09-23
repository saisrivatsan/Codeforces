#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    int i,j,k;
    for(i=0;i<n;i++)
        cin>>A[i];


    for(i=0;i<n & !A[i];i++);
    if(i==n)
    {
        cout<<"-1\n";
        return 0;
    }

    int ans = 1;
    i++;
    for(;i<n;i++)
        if(A[i]==0)
            continue;
        else if(A[i-1]==1)
            ans++;
        else
            ans+=2;


    cout<<ans<<"\n";
    return 0;

}
