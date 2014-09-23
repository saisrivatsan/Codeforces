#include <iostream>
#include <vector>
using namespace std;
#define M 1000000007
int main()
{
	long long int n,m,sum=1,i,j,k;
	vector <bool> b;
	cin>>n>>m;
    string a[n];
	for(i=0;i<n;i++)
        cin>>a[i];

	for(i=0;i<m;i++)
    {
        b.assign(26,0);
        k = 0;
        for(j=0;j<n;j++)
			b[a[j][i]-'A']=1;

        for(j=0;j<26;j++)
            if(b[j])
                k++;

        sum=(sum*k)%M;
	}

	cout<<sum<<endl;
}
