class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum + nums[i] >= 0)
            {
                sum = sum + nums[i];
                maxi = max(sum, maxi);
            }
            else 
            {
                sum = 0;
                maxi = max(maxi, nums[i]);
            }
        }
        return maxi;
    }
};