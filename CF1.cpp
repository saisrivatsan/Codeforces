#include <iostream>
using namespace std;


int main()
{
    char str[105][105];
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>str[i];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            int cnt = 0;
            if(i-1>=0)
                cnt += str[i-1][j]=='o';

            if(i+1<n)
                cnt += str[i+1][j]=='o';

            if(j-1>=0)
                cnt += str[i][j-1]=='o';

            if(j+1<n)
                cnt += str[i][j+1]=='o';

            if(cnt%2)
            {
                cout<<"NO\n";
                return 0;
            }
        }

    cout<<"YES\n";
    return 0;
}
