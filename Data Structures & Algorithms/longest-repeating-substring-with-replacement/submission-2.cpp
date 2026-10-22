class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int result = 0;
        int l = 0;
        int m = 0;
        for(int r = 0; r < s.size(); r++)
        {
            count[s[r]]++;
            m = max(m, count[s[r]]);

            while((r - l + 1) - m > k) 
            {
                count[s[l]]--;
                l++;
            }
            result = max(result, r - l + 1);
        }
        return result;
    }
};
