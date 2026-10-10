class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> re;
        for(int i = 0; i< nums.size(); i++)
            re[nums[i]] = i;
        
        for(int i = 0; i< nums.size(); i++)
        {
            int diff = target - nums[i];
            if(re.count(diff) && re[diff] != i)
                return {i , re[diff]};
        }
        return {};
    }
};
