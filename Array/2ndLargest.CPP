#include<bits/stdc++.h>
#include<stdio.h>
#include<limits>
using namespace std;
int main(){

	// Accepting Size of Array
	int n;
	cin>>n;

	// Inserting Array Element 
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	// Declaring required variable for selecting Second max element 
	int max_num=INT_MIN,second_max=INT_MIN;

	// Selecting Max element from array
	for(int i=0;i<n;i++){
		max_num=max(max_num,arr[i]);
	}

	// Selecting Second Largest element from array
	for(int i=0;i<n;i++){
		if(arr[i]<max_num && arr[i]>second_max){
			second_max=arr[i];
		}
	}

	// Printing Second largest Element of Array
	cout<<second_max;
	
  return 0;
}
