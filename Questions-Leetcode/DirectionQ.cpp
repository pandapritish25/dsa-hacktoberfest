#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test
    {
        long int n;
        cin>>n;
        if(n%4==0)
        {
            cout<<"North\n";
        }
        else if(n%4==3)
        {
            cout<<"West\n";
        }
        else if(n%4==2)
        {
            cout<<"South\n";
        }
        else if(n%4==1)
        {
            cout<<"East\n";
        }
    }
    return 0;
}
