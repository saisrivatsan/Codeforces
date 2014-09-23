#include <iostream>
using namespace std;
int main()
{
    string s1,s2;
    long int n  = s1.size(),i,diff=0,cnt=0;
    char ch = s1[0];
    cin>>s1>>s2;
    for(i=0;i<n;i++)
        cnt += (s1[i]!=s2[i]), diff += (s1[i]==ch)-(s2[i]==ch);
    diff = diff<0?-diff:diff;
    cnt = diff + (cnt-diff)/2;
    cout<<cnt<<"\n";
    return 0;
}
