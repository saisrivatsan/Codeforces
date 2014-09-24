#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define LL long long int
LL f(LL a)
{
    return (a*(a+1)/2);
}

int main()
{
    LL k,i,l,r,ans=0;
    string str;
    vector <LL> A;
    cin>>k>>str;
    for(i=0;i<str.size();i++)
        if(str[i]-'0')
            A.push_back(i);
    if(k==0)
    {
                if(A.size()==0)
        {
            cout<<f(str.size());
            return 0;
        }
        ans+=f(A[0]);
        for(i=1;i<A.size();i++)
            ans+=f(A[i]-A[i-1]-1);
        ans+=f(str.size()-A[i-1]-1);
        cout<<ans<<"\n";
        return 0;
    }
    for(l=0,r=k-1;r<A.size();l++,r++)
        if( (l==0) && (r==A.size()-1) )
            ans += (A[l]+1)*(str.size()-A[r]);
        else if(l==0)
            ans += (A[l]+1)*(A[r+1]-A[r]);
        else if(r==A.size()-1)
            ans += (A[l]-A[l-1])*(str.size() - A[r]);
        else
            ans += (A[r+1]-A[r])*(A[l]-A[l-1]);
    cout<<ans<<"\n";
    return 0;
}
