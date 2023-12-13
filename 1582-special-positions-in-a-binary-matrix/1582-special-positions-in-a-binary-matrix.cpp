// class Solution {

// private: 
//     void dfs(vector<vector<int>> m,int x, int y)
//     {
//         for(int i = 0; i < m[0].size(); i++)
//         {
//             if(m[x][i] == 1 && i != y) {
//                 m[x][y] = -1;
//                 m[x][i] = -1;
//             }
//         }
//         for(int i = 0; i < m.size(); i++)
//         {
//             if(m[i][y] == 1 && i != x) {
//                 m[i][y] = -1;
//                 m[x][y] = -1;
//             }
//         }
//     }
// public:
//     int numSpecial(vector<vector<int>>& mat) {
//         int count = 0;
//         for(int i = 0; i < mat.size(); i++)
//         {
//             for(int j = 0; j < mat[0].size(); j++)
//             {
//                 if(mat[i][j] == 1)
//                     dfs(mat,i, j);
//             }
//         }
//         for(int i = 0; i < mat.size(); i++)
//         {
//              for(int j = 0; j < mat[0].size(); j++)
//             {
//                 if(mat[i][j] == 1) count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
private: 
    void dfs(vector<vector<int>>& m, int x, int y) {
        for (int i = 0; i < m[0].size(); i++) {
            if (m[x][i] == 1 && i != y) {
                m[x][i] = -1;
                dfs(m, x, i);
            }
        }
        for (int i = 0; i < m.size(); i++) {
            if (m[i][y] == 1 && i != x) {
                m[i][y] = -1;
                dfs(m, i, y);
            }
        }
    }

public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    dfs(mat, i, j);
                }
            }
        }
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) count++;
            }
        }
        return count;
    }
};
