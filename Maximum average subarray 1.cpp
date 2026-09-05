/*
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> ans;
        int i = 0;
        int j = k;
        int n = nums.size();

        double maxSum = 0;
        double sum = 0;

        for (int z = 0; z < k; z++) {
            sum += nums[z];
        }

        maxSum = sum;

        while (j < n) {
            sum = sum - nums[i];
            sum = sum + nums[j];

            maxSum = max(sum, maxSum);

            j++;
            i++;
        }

        return maxSum / k;
    }
};
*/