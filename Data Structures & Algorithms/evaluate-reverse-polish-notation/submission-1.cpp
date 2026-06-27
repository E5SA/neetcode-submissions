class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        vector<int> nums;
        for (string str : tokens) {
            try {
                nums.push_back(stoi(str));
            } catch (const exception& e) {
                switch (str[0]) {
                    case '+': {
                        nums[nums.size() - 2] += nums.back();
                        nums.pop_back();
                        break;
                    }
                    case '-': {
                        nums[nums.size() - 2] -= nums.back();
                        nums.pop_back();
                        break;
                    }
                    case '*': {
                        nums[nums.size() - 2] *= nums.back();
                        nums.pop_back();
                        break;
                    }
                    case '/': {
                        nums[nums.size() - 2] /= nums.back();
                        nums.pop_back();
                        break;
                    }
                    default:
                        break;
                }
            }
        }
        return nums[0];
    }
};