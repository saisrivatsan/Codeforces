#include <iostream>
using namespace std;

int main()
{
    float p,d,t,f,c;
    cin>>p>>d>>t>>f>>c;


    int cnt = 0;

    float dis = p*d*t/(d-p);
    if(dis<=0)
    {
        cout<<"0\n";
        return 0;
    }

    //cout<<dis<<" ";
    if(dis<=c)
            cnt++;

    while(dis<=c)
    {
        dis = (( dis/d + f )*p + dis)*d/(d-p);
        //cout<<dis<<" ";
        if(dis<c)
            cnt++;
    }

    cout<<cnt<<"\n";
    return 0;
}
