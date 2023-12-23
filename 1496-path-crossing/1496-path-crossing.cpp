class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        map<pair<int, int>, bool>mp;
        mp[{0,0}] = true;
        for(int i = 0; i < path.length(); i++)
        {
            if(path[i] == 'N') y++;
            else if(path[i] == 'S') y--;
            else if(path[i] == 'E') x++;
            else if(path[i] == 'W') x--;
            if(mp[{x,y}]) return true;
            else mp[{x,y}] = true;
        }
       return false; 
    }
};