#include <iostream>
using namespace std;

#define M 1000000007
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;

    long long int ans = 1;
    if (k>n || k==1)
        for (int i=0;i<n;i++)
            ans=(ans*m)%M;

    else if (k==n)
        for (int i=0;i<(n+1)/2;i++)
            ans=(ans*m)%M;

    else if (k<=2 || k%2==0)
        ans=m;

    else
        ans=m*m;
    cout<<ans;
    return 0;
}
