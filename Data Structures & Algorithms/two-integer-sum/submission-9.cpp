class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        vector<pair<int, int>> re;
        for(int i = 0; i < nums.size(); i++)
            re.push_back({nums[i], i});
        sort(re.begin(), re.end());
        while(i < j)
        {
            int sum = re[i].first + re[j].first;
            if(sum == target)
            {
                return {min(re[i].second, re[j].second),
        max(re[i].second, re[j].second)};
            }
            if(sum > target)
                j--;
            else
               i++;

        }
        return {};

    }
};
