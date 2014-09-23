#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int64_t n)
{
    for(int64_t j = 2;j*j<=n;j++)
        if(n%j==0)
            return 0;

    return 1;
}

int main()
{
    int64_t n,i;
    cin>>n;
    vector <int64_t> A;

    for(i=2;i*i<=n;i++)
        if((n%i==0)&&(isPrime(i)))
           cout<<i<<" ",A.push_back(i);

    if(A.size()==0)
        cout<<"1\n0";
    else if(A.size()==1)
    {
        if((n/A[0])%A[0]==0)
            cout<<"1\n"<<A[0]*A[0]<<"\n";
        else
            cout<<"2\n";
    }
    else
        cout<<"1\n"<<A[0]*A[1]<<"\n";

    return 0;
}
