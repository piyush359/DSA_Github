/*
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int Maax = INT_MIN;
            int MIIN = INT_MAX;

            
            for (int j = 0; j <= i; j++) {
                Maax = max(Maax, nums[j]);
            }

            
            for (int j = i; j < n; j++) {
                MIIN = min(MIIN, nums[j]);
            }

            if (Maax - MIIN <= k) {
                return i;
            }
        }

        return -1;
    }
};*/