class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0,count;
        int n = arr.size();
        for(float i = 0; i<n; i++)
        {
            count = ((i + 1) * (n - i) + 1)/ 2;
            sum = sum + count * arr[i];
        }
        return sum;
    }
};
