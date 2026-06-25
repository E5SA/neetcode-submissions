class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string;
        for (string str : strs) {
            encoded_string.append(str + '\0');
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strings;
        string word;
        for (char c : s) {
            if (c == '\0') {
                decoded_strings.push_back(word);
                word = "";
            } else {
                word.push_back(c);
            }
        }

        return decoded_strings;
    }
};
