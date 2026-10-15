class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        for(int i = 0;i < numbers.size();i++)
        {
            int t = target - numbers[i];
            if(mp.count(t))
                return {mp[t], i+1};
            mp[numbers[i]] = i +1;
        }
        return {};
    }
};
