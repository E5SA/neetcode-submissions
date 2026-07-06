class Solution {
   public:
    bool lemonadeChange(vector<int>& bills) {
        array<int, 2> holding{};

        for (const int bill : bills) {
            switch (bill) {
                case 5:
                    holding[0]++;
                    break;
                case 10: {
                    holding[1]++;
                    if (!holding[0]) return false;
                    holding[0]--;
                    break;
                }
                case 20: {
                    if (holding[0] && holding[1]) {
                        holding[0]--, holding[1]--;
                        break;
                    } else if (holding[0] >= 3) {
                        holding[0] -= 3;
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