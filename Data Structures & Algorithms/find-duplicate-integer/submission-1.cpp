class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i : nums)
        {
            if(seen.find(i) != seen.end())
            {
                return i;
            }
            seen.insert(i);
        }
        return -1;
    }
};
