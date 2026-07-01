class Solution {
   public:
    const array<string, 8> charset = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> combinations{""};

        for (char digit : digits) {
            vector<string> next;
            next.reserve(combinations.size() * charset[digit - '2'].size());

            for (const auto& prefix : combinations)
                for (char c : charset[digit - '2']) next.push_back(prefix + c);

            combinations = std::move(next);
        }

        return combinations;
    }
};
