class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int right = nums.size() - 1;
        int left = 0;


        while (left < right) {
            /*if (nums[right] == nums[left]) {
                right--;
                continue;
            }*/

            if (nums[right] + nums[left] == target) {
                vector<int> ret = {left + 1, right + 1};
                return ret;
            }
            else if (nums[right] + nums[left] > target) {
                right--;
            }
            else {
                left++;
            }
        }
        return {};
    }
};
