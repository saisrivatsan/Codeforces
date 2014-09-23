#include<iostream>
#include<algorithm>


typedef long long ll;
using namespace std;
int main()
{
	ll n,x1=0,x2=0,y1=0,y2=0,a[2005][2005],L[5000] = {0},R[5000] = {0};
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n && cin>>a[i][j];j++)
			L[i+j]+=a[i][j],R[i-j+n]+=a[i][j];

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if((i+j)%2 && L[i+j] + R[i-j] - a[i][j] > L[x1+y1] + R[x1-y1] - a[x1][y1])
				x1 = i,y1 = j;
			else if ((i+j)%2!=0 && L[i+j] + R[i-j] - a[i][j] > L[x2+y2] + R[x2-y2] - a[x2][y2])
				x2 = i,y2 = j;

	cout<<L[x1+y1] + R[x1-y1] - a[x1][y1] + L[x2+y2] + R[x2-y2] - a[x2][y2]<<"\n";
	cout<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1<<"\n";
	return 0;
}
