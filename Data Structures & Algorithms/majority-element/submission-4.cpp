class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> freq_map;

        freq_map.reserve(nums.size());
        for (int num : nums)
        {
            freq_map[num]++;
            if (freq_map[num] > nums.size() / 2)
                return num;
        }
    }
};