#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <queue>
using namespace std;

float pi = 3.1415926536;

int main()
{
    //freopen("A.txt","r",stdin);
    long int n,i;
    cin>>n;
    long int A[n+1];
    float Area = 0;
    A[0] = 0;
    for(i=1;i<=n;i++)
        cin>>A[i];

    sort(A,A+n+1);
    for(i=1;i<=n;i++)
        Area += (n%2 == i%2)*(float)(A[i]*A[i]- A[i-1]*A[i-1])*pi;

    cout<<Area<<"\n";


    return 0;
}


