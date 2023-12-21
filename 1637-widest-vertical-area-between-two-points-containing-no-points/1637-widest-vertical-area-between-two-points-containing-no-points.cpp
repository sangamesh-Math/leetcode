class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // vector<int> pts(points.size());
        // for(int i = 0; i < pts.size(); i++)
        // {
        //     pts[i] = points[i][0];
        // }
        // sort(pts.begin(), pts.end());
        // int maxdiff = INT_MIN;
        // for(int i = 0; i < pts.size() - 1; i++)
        // {
        //     maxdiff = max(maxdiff, pts[i + 1] - pts[i]);
        // }
        // return maxdiff;
       // Realized that using set is a better option because it also considers duplicate x coords and sorts the values by default as they are inserted
       set<int>ss;
       int res = 0;
       for(auto itr : points)
       {
           ss.insert(itr[0]);
       }
       for(auto i = next(begin(ss)); i != ss.end(); i++)
       {
           res = max(res, *i - *prev(i));
       }
       return res;
    }
};