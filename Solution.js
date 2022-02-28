
/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function (nums) {
    
    const ranges = [];
    const size = nums.length;
    let start = 0;

    for (let end = 0; end < size; end++) {
        if (end + 1 < size && nums[end] + 1 === nums[end + 1]) {
            continue;
        }
        if (nums[start] === nums[end]) {
            ranges.push(Number(nums[start]).toString());

        } else {
            ranges.push(Number(nums[start]).toString() + "->" + Number(nums[end]).toString());
        }
        start = end + 1;
    }
    return ranges;
};
