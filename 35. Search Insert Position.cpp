class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res;
        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] == target) {
                res = i;
                break;
            }
            else if (nums[i] > target) {
                res = i;
                break;
            }
        }
        return res;
    }
};