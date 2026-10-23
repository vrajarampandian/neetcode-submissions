class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> c1;
        for(char c : s1)
            c1[c]++;
        
        int n = c1.size();
        for(int i = 0; i< s2.length();i++)
        {
            unordered_map<char, int> c2;
            int cur = 0;
            for(int j = i; j < s2.length(); j++)
            {
                char c = s2[j];
                c2[c]++;
                if(c1[c] < c2[c])
                    break;
                if(c1[c] == c2[c])
                    cur++;
                if(cur == n)
                    return true;
            }
        }
        return false;
    }
};
