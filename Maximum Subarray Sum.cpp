// Maximum Subarray Sum

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.

    long long maxi = LONG_MIN;
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    if(maxi < 0){
        return 0;
    }
    return maxi;
}
