class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> re;
        for(int i = 0; i < nums.size(); i++) {
            if(re.find(nums[i]) != re.end())
                return true;
            else
                re.insert(nums[i]);
        }
        return false;
    }
};