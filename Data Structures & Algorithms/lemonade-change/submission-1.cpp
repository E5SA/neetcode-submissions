class Solution {
   public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (const int bill : bills) {
            switch (bill) {
                case 5:
                    five++;
                    break;
                case 10: {
                    ten++;
                    if (!five) return false;
                    five--;
                    break;
                }
                case 20: {
                    if (five && ten) {
                        five--, ten--;
                        break;
                    } else if (five >= 3) {
                        five -= 3;
                        break;
                    }
                    return false;
                }
                default:
                    break;
            }
        }
        return true;
    }
};