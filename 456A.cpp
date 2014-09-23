#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int main()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n&&cin>>a>>b;i++)
        if(a!=b)
        {
        cout<<"Happy Alex\n";
        return 0;}

        cout<<"Poor Alex\n";
        return 0;

}
