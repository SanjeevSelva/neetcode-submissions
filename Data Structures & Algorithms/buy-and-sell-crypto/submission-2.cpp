class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        int count = 0;
        int sum1 = 0;
        int iteration = 0;
        int max_iteration = 0;
        for(int i = 0; i < prices.size(); i++) {
            
            
            if (prices[i] < min) {
                min = prices[i];
                iteration = i;
            }

            if (iteration > max_iteration) {
                max = prices[i];
                max_iteration = i;
            }
            else if (prices[i] > max) {
                max = prices[i];
                max_iteration = i;
            }

            if (count != 0) {
                int sum = (max - min);
                if (sum <= 0) {
                    sum = 0;
                }

                if (sum > sum1) {
                    sum1 = sum;
                }
            }
            count++;

        }
        return sum1;
    }
};
