struct IntHash
{
    size_t operator()(uint64_t x) const
    {
        x ^= x >> 30;
        x *= 0xbf58476d1ce4e5b9ULL;
        x ^= x >> 27;
        x *= 0x94d049bb133111ebULL;
        x ^= x >> 31;
        return x;
    }
};

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int, IntHash> freq_map;

        freq_map.reserve(nums.size());
        for (int num : nums)
        {
            freq_map[num]++;
            if (freq_map[num] > nums.size() / 2)
                return num;
        }
    }
};