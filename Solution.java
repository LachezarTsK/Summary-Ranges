
import java.util.ArrayList;
import java.util.List;

public class Solution {

    public List<String> summaryRanges(int[] nums) {

        List<String> ranges = new ArrayList<>();
        int size = nums.length;
        int start = 0;

        for (int end = 0; end < size; end++) {
            if (end + 1 < size && nums[end] + 1 == nums[end + 1]) {
                continue;
            }
            if (nums[start] == nums[end]) {
                ranges.add(Integer.toString(nums[start]));

            } else {
                ranges.add(nums[start] + "->" + nums[end]);
            }
            start = end + 1;
        }
        return ranges;
    }
}
