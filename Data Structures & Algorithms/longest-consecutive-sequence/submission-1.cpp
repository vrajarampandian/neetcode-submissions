class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        for(int n : nums)
        {
            if(s.find(n-1) == s.end())
            {
                int l = 1;
                while(s.find(n+l) != s.end())
                {
                    l++;
                }
                result = max(l, result);
            }
            // int streak = 0;
            // int curr  = n;
            // while(s.find(curr) != s.end())
            // {
            //     streak++;
            //     curr++;
            // }
            // result = max(result, streak);
        }
        return result;
    }
};
