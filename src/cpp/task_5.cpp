#include <iostream>
#include <vector>
#include <algorithm>

class Problem5 {
public:
    static bool hasTripletSumZero(std::vector<int>& nums) {
        // Sort the array to use two-pointer technique
        std::sort(nums.begin(), nums.end());

        // Iterate through the array, looking for a triplet
        for (int i = 0; i < nums.size() - 2; ++i) {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    // Found a triplet with sum zero
                    return true;
                } else if (sum < 0) {
                    // Move the left pointer to the right
                    ++left;
                } else {
                    // Move the right pointer to the left
                    --right;
                }
            }
        }
        // No triplet found
        return false;
    }
};