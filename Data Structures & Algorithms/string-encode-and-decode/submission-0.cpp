class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(const string &s : strs)
        {
            result.append(to_string(s.size()));
            result.append("#");
            result.append(s);
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#')
                j++;
            
            int length = stoi(s.substr(i, j-i));
            i = j + 1;
            result.push_back(s.substr(i, length));
            i = i + length;
        }
        return result;
    }
};

