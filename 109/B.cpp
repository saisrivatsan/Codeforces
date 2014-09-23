#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define LL long long int

bool cmp(pair<LL,LL> l, pair<LL,LL> r)
{
    if(l.second == r.second)
        return l.first > r.first;
    else
        return l.second > r.second;
}
int main()
{
	LL n,i,j,k,a,b;
	cin>>n;
	vector <pair<LL,LL> > A;
	for(i=0;i<n;i++)
    {
        cin>>a>>b;
        A.push_back(make_pair(a,b));
    }

    sort(A.begin(),A.end(),cmp);

    //for(i=0;i<n;i++)
      //  cout<<A[i].first<<" "<<A[i].second<<"\n";

    LL rem = 1,currIdx = 0,pt = 0;
    while(rem && currIdx <n)
    {
        rem = rem - 1 + A[currIdx].second;
        pt =  pt + A[currIdx++].first;
    }

    cout<<pt<<"\n";
	return 0;
}
