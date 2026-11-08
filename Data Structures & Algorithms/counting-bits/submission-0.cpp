class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> r(n + 1, 0);
        for(int i = 0; i <=n;i++)
        {
            r[i] = __builtin_popcount(i);
        }
        return r;
    }
};
