#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[12] = {1,2,3,4,5,6,7,8,9,11,13,14};

    cout<<"Enter the Value to Search in a Sorted Array: ";
    int key;
    cin>>key;

    int s=0,e=9,ans;

    int mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            break;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
    }
    cout<<"\nThe Value is at "<<ans<<"th Index in the Array.";
    return 0;
}
