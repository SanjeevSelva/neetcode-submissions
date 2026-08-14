
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 1;
        int count = 1;
        int first = nums[0];
        int second = 0;
        if (nums.size() == 0) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            second = nums[i];
            if (first + 1 == second) {
                count++;
            }
            else if (first == second) {
                continue;
            }
            else {
                count = 1;
            }
            if (count > max) {
                max = count;
            }

            first = second;
        }
        return max;
    }

};
