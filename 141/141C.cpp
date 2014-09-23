#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector< pair< int, string > > v;
vector< pair< int, string > > ans;

int main()
{
	int n,a;
    string name;
	cin>>n;
	for(int i=0; i<n ; i++)
    {
		cin>>name>>a;
		v.push_back( make_pair(a,name) );
	}

	sort(v.begin(), v.end());
	int h = 5000;
	for(int i=0 ; i<n ; i++)
    {
		if(v[i].first > ans.size())
        {
			cout<<"-1"<<endl;
			return 0;
		}

		vector< pair<int,string> >::iterator it = ans.begin();
		ans.insert(it+v[i].first, make_pair(h,v[i].second));
		h--;

	}

	for(int i=0; i<n ; i++){
		cout<<ans[i].second<<" "<<ans[i].first<<endl;
	}
}
