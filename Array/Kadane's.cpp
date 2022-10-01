//This algorithm is known as KADANE'S ALGORITHM. It is widely used to find largest sum contiguous subarray.
// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;


int maxSubArraySum(int a[], int size)
{
	int final_max = INT_MIN, curr_max = 0;


	for (int i = 0; i < size; i++) {
		curr_max = curr_max + a[i];
		if (final_max< curr_max)
			final_max = curr_max;


		if (curr_max< 0)
		curr_max = 0;
	}
	return final_max;
}


// Driver Code
int main()
{
	cout<<"Enter the size of your Array:"<<endl;
  int n;
  cin>>n;
  
  int arr[n];
  for(int i=0; i<n; i++){
  cin>>arr[i];
  }

	// Function Call
	int max_sum = maxSubArraySum(arr, n);
	cout << "Maximum contiguous sum is:" << max_sum;
	return 0;
}
