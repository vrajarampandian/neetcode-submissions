class Solution {
public:
    bool isAnagram(string s, string t) {
        char str[256] = {0};
        if(s.length() != t.length())
            return false;
        for(int i = 0; i<s.length();i++)
        {
            str[s[i]]++;
        }
        for(int i= 0; i<t.length();i++)
        {
            str[t[i]]--;
        }
        for(int i = 0; i< 256;i++)
        {
            if(str[i] != 0)
                return false;
        }

        return true;
        
    }
};
