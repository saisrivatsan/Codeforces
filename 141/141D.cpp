#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
    int n,L;
    //freopen("A.txt","r",stdin);
    cin>>n>>L;
    int i,j,k,x,d,t,p;
    vector< pair<int,int> > A[L+1];
    vector<int> D(L+1,0);
    vector<int> cnt(L+1,0);
    vector<int> cnt2(L+1,0);
    vector<int> idx[L+1];
    vector<int> prev(L+1,-1);

    for(i=0;i<n;i++)
    {
        cin>>x>>d>>t>>p;
        if((x-p<0)||(t>d))
            continue;

        idx[x+d].push_back(i);
        A[x+d].push_back(make_pair(x-p,t+p));

    }

    for(i=1;i<=L;i++)
        if(A[i].size()!=0)
        {
            D[i] = D[i-1] + 1;
            cnt[i] = cnt[i-1];
            for(j=0;j<A[i].size();j++)
                if(D[i]>D[A[i][j].first]+ A[i][j].second)
                {
                    D[i] = D[A[i][j].first]+ A[i][j].second;
                    prev[i] = idx[i][j];
                    //cout<<idx[i][j]<<"...";
                    cnt2[i] = j;
                    cnt[i] = cnt[A[i][j].first]+1;
                }
        }
        else
            D[i] = D[i-1] + 1,cnt[i] = cnt[i-1];

    cout<<D[L]<<"\n";
    cout<<cnt[L]<<"\n";
    for(i=L;i>0;i--)
    {
        //cout<<i<<" "<<prev[i]<<"\n";
        if(prev[i]!=-1)
        {
            cout<<prev[i]+1<<" ";
            //cout<<cnt2[i]<<" ";
            i = A[i][cnt2[i]].first + 1;
        }

    }
    return 0;
}
