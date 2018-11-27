class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;
        vector <int> modified;
        
        if (nums.size() <= 1)
        {
            return count;
        }
        
        modified.push_back(nums[0]);
        
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] < INT_MAX/2 &&
               nums[j] > INT_MIN/2)
            {               
                auto it = lower_bound(modified.begin(), modified.end(), 2*nums[j] + 1);

                if (it != modified.end())
                {
                    count += (modified.size() - (it - modified.begin()));
                }
            }
            else if (nums[j] <= INT_MIN/2)
            {
                count += modified.size();
            }
            
            auto it = lower_bound (modified.begin(), modified.end(), nums[j]);
            modified.insert(it, nums[j]);
        }
        
        return count;
    }
};
