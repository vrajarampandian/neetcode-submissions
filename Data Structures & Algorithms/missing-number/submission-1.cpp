class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> ns(nums.begin(), nums.end());
        int s = nums.size();
        for(int i = 0; i<=s;i++)
        {
            if(ns.find(i) == ns.end())
                return i;
        }
        return -1;
    }
};
