class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            int i = l + (r - l) / 2;

            if (nums[i] > nums[r]) {
                l = i + 1;
            }
            else {
                r = i;
            }
        }

        return nums[l];
    }
};