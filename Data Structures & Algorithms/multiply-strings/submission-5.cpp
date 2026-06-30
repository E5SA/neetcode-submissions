class Solution {
   public:
    string multiply(string num1, string num2) {
        vector<int> result(num1.length() + num2.length());

        for (int i = num1.length() - 1; i >= 0; --i) {
            for (int j = num2.length() - 1; j >= 0; --j) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;

                int sum = product + result[p2];
                result[p2] = sum % 10;
                result[p1] += sum / 10;
            }
        }

        string result_string;
        for (int digit : result)
            if (!(result_string.empty() && digit == 0)) result_string.push_back(digit + '0');

        return result_string.empty() ? "0" : result_string;
    }
};
