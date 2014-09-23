#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n = str[str.size()-1]-'0';
    if(str.size()>=2)
        n = n + (str[str.size()-2]-'0')*10;

    //cout<<n<<"\n";
    cout<< 0 + 4*!(n%4)<<"\n";
    return 0;
}
