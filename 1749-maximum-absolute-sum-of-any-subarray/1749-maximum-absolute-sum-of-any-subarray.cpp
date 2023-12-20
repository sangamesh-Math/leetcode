class Solution {
private:   
    //Brute Force approach 
    // void subSum(vector<int> &nums, int ind, int &mxSum, int &sum)
    // {
    //     if(ind >= nums.size()) return;
    //     sum += nums[ind];
    //     mxSum = max(abs(sum), mxSum);
    //     subSum(nums, ind + 1, mxSum, sum);
        
    // }

    //Optimal Approach using Kadane's Algorithm
    void kadaneAlgoForMaxSum(vector<int> nums, int &maxi)
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum + nums[i] >= 0)
            {
                sum = sum + nums[i];
                maxi = max(maxi, sum);
            }
            else 
            {
                sum = 0;
                maxi = max(maxi, nums[i]);
            }
        }
    }
    void kadaneAlgoForMinSum(vector<int> nums, int &mini)
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(sum + nums[i] < 0)
            {
                sum = sum + nums[i];
                mini = min(mini, sum);
            }
            else 
            {
                sum = 0;
                mini = min(mini, nums[i]);
            }
        }
    }

public:
    //Brute Force Approach
    // int maxAbsoluteSum(vector<int>& nums) {
    //     int mxSum = 0;
    //     int sum;
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //        sum = 0;
    //         subSum(nums, i, mxSum, sum);
    //     }
    //     return mxSum;
    // }
     int maxAbsoluteSum(vector<int>& nums) {
         int mini = INT_MAX;
         int maxi = INT_MIN;
         kadaneAlgoForMaxSum(nums, maxi);
         kadaneAlgoForMinSum(nums, mini);
         return max(abs(mini), maxi);
    }
};