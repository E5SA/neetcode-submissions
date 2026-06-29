class Solution {
   public:
    string add(string_view a, string_view b) {
        string result;

        size_t carry = 0;
        int i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result.push_back(char('0' + (sum % 10)));
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        if (num2.length() > num1.length()) swap(num1, num2);

        size_t units = 0;
        int index = num2.length() - 1;
        string result = "0", current;
        while (index >= 0) {
            size_t carry = 0;
            current.clear();
            for (int i = num1.length() - 1; i >= 0; --i) {
                size_t product = (num2[index] - '0') * (num1[i] - '0') + carry;
                current.push_back(char('0' + (product % 10)));
                carry = product / 10;
            }
            if (carry > 0) current.push_back(to_string(carry)[0]);
            reverse(current.begin(), current.end());
            current.append(units, '0');
            string new_result = add(result, current);
            result = new_result;
            units++, index--;
        }
        return result;
    }
};
