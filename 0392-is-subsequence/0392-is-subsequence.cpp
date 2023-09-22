class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        if(s.size() && t.size())
        {
        char S[n];
        for(int i = 0; i < n; i++)
        {
            S[i] = s[i];
        }
       size_t found = t.find(S[0]);
       if(found != string::npos) 
            found++;
        else
            return false;
        for(int i = 1; i < s.size(); i++)
        {
            
            
            if(found < t.size())
            {
                found = t.find(S[i], found);
                if(found != string::npos) found++;
                else return false;
            }
            else return false;
           
            
        }
        } 
        else if(t.size() == 0 && s.size() != 0 ) return false;
        return true;
    }
};