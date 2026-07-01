class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        array<int, 26> letter_prime = {5,  71, 37, 29, 2,  53, 59, 19, 11, 83, 79, 31, 43,
                                       13, 7,  67, 97, 23, 17, 3,  41, 73, 47, 89, 61, 101};
        unordered_map<long, vector<string>> anagrams;
        for (string str : strs) {
            long product = 1;
            for (char ch : str) {
                product *= letter_prime[ch - 'a'];
            }
            anagrams[product].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& pair : anagrams) result.push_back(pair.second);
        return result;
    }
};
