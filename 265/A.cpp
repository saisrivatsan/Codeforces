#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    string s;
    cin>>s;

    while(i<n)
    {
        if(s[i]=='0')
            break;
        i++;
    }

    if(i==n) cout<<n<<"\n";
    else cout<<i+1<<"\n";


    return 0;
}
