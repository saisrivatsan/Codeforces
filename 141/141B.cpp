#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int a,x,y;
    cin>>a>>x>>y;

    int boxH = y/a,boxNum;
    if(y%a==0)
        cout<<"-1\n";
    else if(boxH==0)
    {
        if(((x==0)&&(y==0))||(abs(2*x)>=a))
            cout<<"-1\n";
        else
            cout<<"1\n";
    }

    else
    {
        if(boxH%2==0)
        {
            boxNum = (boxH/2)*3;
            if((x==0)||(x>=a)||(x<=-a))
                cout<<"-1\n";
            else if(x>0)
                cout<<boxNum+1;
            else
                cout<<boxNum;
        }

        else
        {
            boxNum = ((boxH+1)/2)*3 - 1;
            if((2*x>=a)||(2*x<=-a))
                cout<<"-1\n";
            else
                cout<<boxNum;
        }
    }

    return 0;

}
