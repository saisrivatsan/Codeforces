#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    map<char,int> A;
    map<char,int> B;

    char str_1[102],str_2[102],str_12[202];
    cin>>str_1>>str_2>>str_12;

    int i;
    for(i=0;i<strlen(str_1);i++)
        if(A.find(str_1[i]) == A.end())
            A[str_1[i]] = 1;
        else
            A[str_1[i]]++;

    for(i=0;i<strlen(str_2);i++)
        if(A.find(str_2[i]) == A.end())
            A[str_2[i]] = 1;
        else
            A[str_2[i]]++;

    for(i=0;i<strlen(str_12);i++)
        if(B.find(str_12[i]) == B.end())
            B[str_12[i]] = 1;
        else
            B[str_12[i]]++;

    map<char,int>::iterator it;
    if(A.size()!=B.size())
    {
        cout<<"NO\n";
        return 0;
    }
    else
        for(it = A.begin();it != A.end();it++)
        {
            if(A[it->first]!=B[it->first])
            {
                cout<<"NO\n";
                return 0;
            }
        }

    cout<<"YES\n";

    return 0;

}
