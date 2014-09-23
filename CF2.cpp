#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> L,pair<int,int> R)
{
     return L.second>R.second;
}

int main()
{
    long long int n,k,i,j;
    cin>>n>>k;
    vector < pair<int,int> > H;
    string str;
    cin>>str;

    for(i=0;i<26;i++)
        H.push_back(make_pair(i,0));

    for(i=0;i<str.size();i++)
        H[str[i]-'A'].second++;

    sort(H.begin(),H.end(),cmp);

    string sol;
    i = 0;
    int score = 0;
    while(sol.size() + H[i].second <= k)
    {
        score += (H[i].second)*(H[i].second);
        while(H[i].second--)
            sol.push_back((char)(H[i].first + 'A'));
        i++;
    }

    score += (k-sol.size())*(k-sol.size());
    while(sol.size()!=k)
        sol.push_back((char)(H[i].first + 'A'));
    cout<<score<<"\n";
    //cout<<sol;
    return 0;

}
