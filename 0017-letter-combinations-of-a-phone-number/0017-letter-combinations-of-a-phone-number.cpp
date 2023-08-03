class Solution {
private:
    void helper(string digits, int i, vector<string>& res, vector<char> adj[], string temp)
    {
        if(i >= digits.size())
        {
            res.push_back(temp);
            return;
        }
        int num = digits[i] - '0';
        for(auto itr : adj[num])
        {
            temp += itr;
            helper(digits, i + 1, res, adj, temp);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0) return res;
        vector<char> adj[10];
        adj[2].push_back('a');
        adj[2].push_back('b');
        adj[2].push_back('c');
        adj[3].push_back('d');
        adj[3].push_back('e');
        adj[3].push_back('f');
        adj[4].push_back('g');
        adj[4].push_back('h');
        adj[4].push_back('i');
        adj[5].push_back('j');
        adj[5].push_back('k');
        adj[5].push_back('l');
        adj[6].push_back('m');
        adj[6].push_back('n');
        adj[6].push_back('o');
        adj[7].push_back('p');
        adj[7].push_back('q');
        adj[7].push_back('r');
        adj[7].push_back('s');
        adj[8].push_back('t');
        adj[8].push_back('u');
        adj[8].push_back('v');
        adj[9].push_back('w');
        adj[9].push_back('x');
        adj[9].push_back('y');
        adj[9].push_back('z');

        
            string temp = "";
            helper(digits, 0, res, adj, temp);

            return res;
        
    }
};