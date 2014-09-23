#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    char str[200];
    cin>>str;
    int i = 0;
    int n = strlen(str);
    while((i<n) && (str[i]!='.'))
        i++;


    vector <char> num;
    string ans;
    int End = i--;
    int Beg = (str[0]=='-')?1:0;

    //cout<<End<<"\n";

    for(i=End;i>=Beg;i--)
    {
        num.push_back(str[i]);
        if((End-i)%3==0 && (End!=i) && (i!=Beg))
            num.push_back(',');
    }
    if(str[0]=='-')
        ans = ans + "(";

    ans = ans +"$";
    for(i=num.size()-1;i>=1;i--)
        ans = ans + num[i];

     ans = ans + ".";
     if(End>=n-1)
        ans = ans + "00";
     else if (End>=n-2)
        ans = ans + str[End+1] + "0";
     else
        ans = ans + str[End+1] +str[End+2];

     if(str[0]=='-')
        ans = ans + ")\n";

    cout<<ans;
    return 0;
}
