class Solution {
    void helper(vector<int> &nums, vector<vector<int>> &res, vector<int> &perm, int index, map<int, int>mp)
    {
        if(index == nums.size())
        {
           res.push_back(perm);
           return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(mp[i] != 1)
            {
                mp[i] = 1;
                perm.push_back(nums[i]);
                helper(nums, res, perm, index + 1, mp);
                mp[i] = 0;
                perm.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>perm;
        map<int, int>mp;
        helper(nums, res, perm, 0, mp);
        return res;
    }
};