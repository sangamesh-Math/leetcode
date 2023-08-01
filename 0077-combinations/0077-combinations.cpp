class Solution {
    private:
        void fun(int i, vector<int> &permut, vector<vector<int>>&ans, int k, int n)
        {
            if(permut.size() == k)
            {
                ans.push_back(permut);
                return;
            }
            if(i >= n)
            {
                return;
            }
            permut.push_back(i+1);
            fun(i+1, permut, ans, k, n);
            permut.pop_back();
            fun(i+1, permut, ans, k, n);
        }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int> permut;
        
            fun(0, permut, ans, k, n);
        
        return ans;
    }
};