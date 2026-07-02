class Solution {
   public:
    string mergeAlternately(string word1, string word2) {
        string merged_string;
        int p1 = 0, p2 = 0;
        while (p1 < word1.length() && p2 < word2.length()) {
            merged_string.push_back(word1[p1]);
            merged_string.push_back(word2[p2]);
            p1++, p2++;
        }
        merged_string.append(word2, p2);
        merged_string.append(word1, p1);
        return merged_string;
    }
};