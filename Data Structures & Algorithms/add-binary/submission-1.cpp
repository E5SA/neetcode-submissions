class Solution {
   public:
    string addBinary(string a, string b) {
        string result(max(a.length(), b.length()) + 1, '0');
        bool carry = false;
        int pa = a.length() - 1, pb = b.length() - 1, pr = result.length() - 1;

        while (pa >= 0 || pb >= 0 || carry) {
            int sum = carry;

            if (pa >= 0) sum += a[pa--] - '0';
            if (pb >= 0) sum += b[pb--] - '0';

            result[pr] = char('0' + (sum % 2));
            carry = sum / 2;
            pr--;
        }
        if (result[0] == '0') result.erase(0, 1);
        return result;
    }
};