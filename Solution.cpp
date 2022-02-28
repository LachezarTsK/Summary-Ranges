
#include <string>
#include <vector>
using namespace std;

class Solution {
  
public:

    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> ranges;
        int size = nums.size();
        int start = 0;

        for (int end = 0; end < size; end++) {
            if (end + 1 < size && nums[end] + 1 == nums[end + 1]) {
                continue;
            }
            if (nums[start] == nums[end]) {
                ranges.push_back(to_string(nums[start]));

            } else {
                ranges.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            }
            start = end + 1;
        }
        return ranges;
    }
};
