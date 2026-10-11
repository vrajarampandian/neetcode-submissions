class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int num : nums)
            count[num]++;
        
        vector<pair<int, int>> pv;
        for(const auto &p : count)
        {
            pv.push_back({p.second, p.first});
        }
        sort(pv.rbegin(), pv.rend());

        vector<int> result;
        for(int i = 0; i < k;i++)
            result.push_back(pv[i].second);
        
        return result;
    }   

};
