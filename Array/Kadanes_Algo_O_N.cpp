#include<iostream>

using namespace std;

int main()
{
    int arr[8] = {1,2,3,5,-3,8,3,6};

    int ans = arr[0];
    int sum = arr[0];
    for(int i =1 ; i<8;i++){
       sum = max(arr[i],sum+arr[i]);
       ans = max(ans,sum);
    }
     cout<<ans<<<endl;

    return 0;
}
