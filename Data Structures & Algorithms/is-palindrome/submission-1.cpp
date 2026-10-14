class Solution {
public:
    bool checkalphanum(char c)
    {
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end)
        {
            while (start < end && !checkalphanum(s[start]))
                start++;
            while (end > start && !checkalphanum(s[end]))
                end--;
            
            if(tolower(s[start]) != tolower(s[end]))
                return false;
            start++;
            end--;
        }
        return true;
    }
};
