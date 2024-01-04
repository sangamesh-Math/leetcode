// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         map<int, int>mp;
//         int cnt = 0;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto i : mp)
//         {
//             if(i.second % 3 == 0) cnt = cnt + i.second / 3;
//             else if((i.second % 3) % 2 == 0) cnt = cnt + i.second / 3 + ((i.second % 3) / 2);
//             else for(int i = i.second - i.second % 3; i >= 3; i = i - 3){
//                 if((i % 3) % 2 == 0) 
//             }
//            // else if(i.second % 2 == 0) cnt = cnt + i.second / 2;
//             else
//             return -1;
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }

        int count=0;
        for(auto a: mp){
            int t = a.second;
            if(t==1)return -1;
            count += t/3;
            if(t%3)count++;
        }
        return count;
    }
};

