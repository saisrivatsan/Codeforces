#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Max = 0;
    int MxIdx,MnIdx;
    MxIdx = MnIdx = 0;
    int Min = INT_MAX;
    int num;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num>Max)
            Max = num,MxIdx = i;
        if(num<=Min)
            Min = num,MnIdx = i;
    }

    cout<<MxIdx + (n - 1 - MnIdx) - (MxIdx>MnIdx);
    return 0;
}
