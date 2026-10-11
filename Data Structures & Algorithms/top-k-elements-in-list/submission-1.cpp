class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> f(nums.size()+1);

        for(int i : nums)
            count[i]++;
        
        for(const auto &e : count)
        {
            f[e.second].push_back(e.first);
        }

        vector<int> result;
        for(int i = f.size()-1; i>0;--i)
        {
            for(int n : f[i])
            {
                result.push_back(n);
                if(result.size() == k)
                {
                    return result;
                }
            }
        }
        
    }
};
