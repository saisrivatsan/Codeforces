#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int A[n],i;
    for(i=0;i<n;i++)
        cin>>A[i];

    sort(A,A+n);
    long long int ans = 0;
    for(i=0;i<n;i++)
        ans += A[i]*(i+2);

    ans -= A[n-1];
    cout<<ans<<"\n";
    return 0;
}
