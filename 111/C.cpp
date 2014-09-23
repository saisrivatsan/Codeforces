#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long long int n,k,i,x=0,y=0;
    cin>>n>>k;
    int A[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    k--;
    for(i=0;i<n;i++)
	{
		if(A[i]<A[k/n])
			x++;
		if(A[i]==A[k/n])
			y++;
	}
	cout<<A[k/n]<<' '<<A[(k-n*x)/y]<<"\n";
    //cout<<A[k/n]<<" "<<A[k%n]<<"\n";
    return 0;

}
