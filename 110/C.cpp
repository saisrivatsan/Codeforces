#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,j,n = s1.size(),m = s2.size(),cnt = 0,Min = 2000;

    for(i=-m+1;i<n;i++)
    {
        cnt = 0;
        for(j=0;j<m;j++)
            if( i+j<0 || i+j>n || s1[i+j]!=s2[j])
                cnt++;

        Min = min(Min,cnt);
    }
    cout<<Min<<"\n";
    return 0;

}
