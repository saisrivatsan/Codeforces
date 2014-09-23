#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    freopen("A.txt","r",stdin);
    int n;
    cin>>n;

    int i,j,i1=0,i2=0,i0=0,a,b,c;
    string str[100];
    int A[100][3] = {0};

    for(i=0;i<n;i++)
    {
        cin>>j;
        cin>>str[i];
        while(j--)
        {
            cin>>a>>b>>c;
            b = abs(b);
            c = abs(c);
            if( a/10==a%10 && a%10==b/10 && b/10==b%10 && b%10==c/10 && c/10==c%10)
                A[i][0]++;
            else if( a/10>a%10 && a%10>b/10 && b/10>b%10 && b%10>c/10 && c/10>c%10)
                A[i][1]++;
            else
                A[i][2]++;
        }

        if(A[i][0]>=A[i0][0])
            i0 = i;
        if(A[i][1]>=A[i1][1])
            i1 = i;
        if(A[i][2]>=A[i2][2])
            i2 = i;

        cout<<A[i][0]<<" "<<A[i][1]<<" "<<A[i][2]<<"\n";

    }

    cout<<A[i0][0]<<" "<<A[i1][1]<<" "<<A[i2][2]<<"\n";

    cout<<"If you want to call a taxi, you should call: ";
    for(i=0;i<i0;i++)
    {
        if(A[i][0]==A[i0][0])
            cout<<str[i]<<", ";
    }
    cout<<str[i]<<".\n";
    //cout<<A[i0][0]<<" "<<A[i1][1]<<" "<<A[i2][2]<<"\n";
    cout<<"If you want to order a pizza, you should call: ";
    for(i=0;i<i1;i++)
    {
        if(A[i][1]==A[i1][1])
            cout<<str[i]<<", ";
    }
    cout<<str[i]<<".\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(i=0;i<i2;i++)
    {
        if(A[i][2]==A[i2][2])
            cout<<str[i]<<", ";
    }
    cout<<str[i]<<".\n";


    return 0;
}
