class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                   // return result;
                }
            }
        }
        // }
        // int k1 = 0, k2 = nums.size() - 1;
        // while (k1 < k2) {
        //     if (nums[k1] + nums[k2] == target) {
        //         result.push_back(k1);
        //         result.push_back(k2);
        //         break;
        //     } else if (nums[k1] + nums[k2] < target) {
        //         k1++;
        //     } else {
        //         k2--;
        //     }
        // }
         return result;
    }   
};