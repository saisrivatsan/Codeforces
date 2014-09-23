#include <iostream>
#include <stdio.h>
using namespace std;

int dis(int x1,int y1,int x2,int y2,int r)
{
    return (x1*x1-x2*x2) + (y1*y1 - y2*y2) <= r*r;
}

int main()
{
    freopen("A.txt","r",stdin);
    int a,b,c,d,n;
    cin>>a>>b>>c>>d;
    cin>>n;
    int A[n][3];
    for(int i=0;i<n;i++)
        cin>>A[i][0]>>A[i][1]>>A[i][2];

    int xmax = max(a,c),xmin = min(a,c),ymin = min(b,d),ymax = max(b,d),flag = 0;
    for(int i = xmin;i<=xmax;i++)//{
        for(int j=0;j<n;j++)
        {
            flag = dis(i,ymin,A[j][0],A[j][1],A[j][2]);
            if(flag)
            {
                cnt--;
                flag = 0;
                cout<<i<<" "<<ymin<<"\n";
                break;
            }
        }//cout<<i<<"..."<<ymin<<"\n";}
    for(int i = xmin;i<=xmax;i++)//{
       for(int j=0;j<n;j++)
        {
            flag = dis(i,ymax,A[j][0],A[j][1],A[j][2]);
            if(flag)
            {
                cnt--;
                flag = 0;
                cout<<i<<" "<<ymax<<"\n";
                break;

            }
        }//cout<<i<<"..."<<ymax<<"\n";}


    for(int i = ymin+1;i<ymax;i++)//{
        for(int j=0;j<n;j++)
        {
            flag = dis(xmin,i,A[i][0],A[i][1],A[i][2]);
            if(flag)
            {
                cnt--;
                flag = 0;
                cout<<xmin<<" "<<i<<"\n";
                break;
            }
        }//cout<<xmin<<"..."<<i<<"\n";}
    for(int i = ymin+1;i<ymax;i++)//{
       for(int j=0;j<n;j++)
        {
            flag = dis(xmax,i,A[i][0],A[i][1],A[i][2]);
            if(flag)
            {
                cnt--;
                flag = 0;
                cout<<xmax<<" "<<i<<"\n";
                break;

            }
        }//cout<<xmax<<"..."<<i<<"\n";}

    cout<<cnt<<"\n";
    return 0;

}
