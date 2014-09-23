#include <iostream>
using namespace std;

int main()
{

    long int k,l,m,n,d,cnt = 0;
    cin>>k>>l>>m>>n>>d;

    for(long int i = 1;i<=d;i++)
    {
        if(i%k && i%l && i%m && i%n)
            cnt++;
    }

    cout<<n-cnt<<"\n";
    return 0;

}
