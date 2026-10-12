class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        int zc = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                p *= nums[i];
            }
            else
                zc++;
        }
        if(zc > 1)
            return vector<int>(nums.size(), 0);
        
        vector<int> result(nums.size(), 0);
        for(int i = 0; i< nums.size(); i++)
        {
            if(zc > 0)
                result[i] = (nums[i] == 0) ? p : 0;
            else
                result[i] = p / nums[i];
        }
        return result;
    }
};
