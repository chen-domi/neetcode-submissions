class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> mySet(std::begin(nums), std::end(nums));
        return nums.size() != mySet.size();
    }
};