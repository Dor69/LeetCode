class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums[-1] = 1;
        nums[nums.size()] = 1;
        int max, index;

        getCoinMax(nums, max, index);

        for(int i = 0; i < nums.size() - 1; i++){
            if ()
        }
    }
    int getCoinMax(vector<int>& nums) {
    int sum[];
    int max = 0;
    int index;
    for (int i = 0; i < nums.size() - 1; i++){
        sum[i] = nums[i] + nums[i - 1] + nums[i + 1];
        if (sum[i] > max) {max = sum [i]; index = i}
    }
    return max, index;
    }
};