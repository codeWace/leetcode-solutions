// Problem: Two Sum
// Input: nums array and target integer
// Output: indices of two numbers summing to target
// Approach: Use unordered_map to find complement in O(n) time

#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(num_to_index.find(complement) != num_to_index.end()) {
                return {num_to_index[complement], i};
            }
            num_to_index[nums[i]] = i;
        }
        return {};
    }
};
