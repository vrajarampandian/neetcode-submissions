class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> b = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char c : s)
        {
            if(b.count(c))
            {
                if(!st.empty() && st.top() == b[c])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                st.push(c);
            }
        }
        return st.empty();
    }
};
