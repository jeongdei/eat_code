/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            if ( 0x1 & n >> i) res++;
        }
        return res;
    }
};
// @lc code=end

