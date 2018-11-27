class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        if (nums.size() == 0)
        {
            vector<int> result;
            return result;
        }
        
        vector <int> result(nums.size(), 0);
        vector<int> sortedV;
        sortedV.push_back(nums[nums.size()-1]);
        
        for (int i = result.size() - 2; i>=0; i--)
        {
            // look for the lowest value that is not smaller than nums[i]
            //
            auto it = lower_bound(sortedV.begin(), sortedV.end(), nums[i]);
            int pos2Insert = it - sortedV.begin();
            sortedV.insert(it, nums[i]);
            result[i] = pos2Insert;
        }
        
        return result;
    }
};
