#include <iostream>
using namespace std;
int main()
{
    long long int n,a,b,i,s;
    cin>>n>>a>>b;
    if((b==0)&&(n-a-b)==1)
    {
        cout<<"-1\n";
        return 0;
    }

    if(b==0 && (n-a-b >1))
    {
        for(i=0;i<n-a;i++)
            cout<<1<<" ";
        s =    1;
        while(i++<n)
            cout<<++s;

            return 0;
    }
    long long int A[n];
    A[0] = 1;
    s = 1;
    for(i=1;i<=b;i++)
    {
        A[i] = s+1;
        s = s+A[i];
    }
    s = A[i-1];
    for( ;i<=a+b;i++)
        A[i] = ++s;
    for( ;i<n;i++)
        A[i] = s;
    for(i=0;i<n;i++)
         cout<<A[i]<<" ";
    cout<<"\n";
    return 0;
}
