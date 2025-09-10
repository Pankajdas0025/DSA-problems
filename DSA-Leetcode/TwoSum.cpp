#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> d;  // value -> index
        for (int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            if (d.find(t) != d.end()) {
                return {d[t], i};  // directly return the answer
            }
            d[nums[i]] = i;
        }
        return {};  // no solution
    }
};
