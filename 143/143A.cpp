#include <iostream>
using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    int a = (r1+d1-c2)/2;
    int b = r1-a;
    int c = c1-a;
    int d = d1-a;

    if(a<=0||b<=0||c<=0||d<=0||a==b||b==c||c==d||a==d||b==d||a==c||a>9||b>9||c>9||d>9)
      cout<<"-1"<<endl;

    else
      cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<"\n";

    return 0;
}
