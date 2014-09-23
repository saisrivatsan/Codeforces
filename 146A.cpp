#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[100];
    cin>>str;
    int cnt = 0;

    for(int i=0;i<n/2;i++)
    {
        cnt += str[i]-str[i+n/2];
        if((str[i]!='4'&&str[i]!='7')||(str[i+n/2]!='4'&&str[i+n/2]!='7'))
        {
            ////cout<<str[i]<<str[i+n/2];
            cout<<"NO\n";
            return 0;
        }

    }
    cout<<cnt<<"\n";
    if(cnt)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
