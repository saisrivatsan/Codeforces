#include <iostream>
using namespace std;

int mask(int x)
{
    if(x==0)
        return 0;

    if(x%10 == 4 || x%10 == 7)
        return mask(x/10)*10+(x%10);
    else
        return mask(x/10);
}
int main()
{
    long long int a,b,c,temp;
    cin>>a>>b;
    if(a<b)
    {
        cout<<b<<"\n";
        return 0;
    }

    while(mask(++a)!=b);
    cout<<a<<"\n";
}
