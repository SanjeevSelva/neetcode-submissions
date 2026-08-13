class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    int one = nums[i];
                    int two = nums[j];
                    int sum = one + two;
                    if (sum == target) {
                        if (i > j) {
                            vector<int> arr = {j,i};
                            return arr;
                        }
                         vector<int> arrs = {i,j};
                         return arrs;
                    }
                }
            }
        }
        
    }
};
