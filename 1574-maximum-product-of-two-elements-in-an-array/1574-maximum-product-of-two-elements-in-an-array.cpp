class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int index = nums.size()-1;

        int ans = (nums[index]-1) * (nums[index-1]-1);

        return ans;
    }
};