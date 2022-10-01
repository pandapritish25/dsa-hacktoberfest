#include<iostream>

using namespace std;

int main()
{
    int arr[8] = {1,2,3,5,-3,8,3,6};

    int cs=0,ms=0;

    for(int i = 0; i<8; i++)
    {
        cs+=arr[i];
        if(cs<0)
            cs=0;
        ms=max(cs,ms);
    }

    cout<<ms<<"\n";

    return 0;
}
