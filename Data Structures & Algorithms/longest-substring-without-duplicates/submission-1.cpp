class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> cSet;
        int l = 0;
        int result = 0;
        for(int r = 0; r < s.size(); r++)
        {
            while(cSet.find(s[r]) != cSet.end())
            {
                cSet.erase(s[l]);
                l++;
            }
            cSet.insert(s[r]);
            result = max(result, r - l + 1);
        }
        return result;
    }
};
