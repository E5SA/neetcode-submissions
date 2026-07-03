class Solution {
   public:
    const array<pair<int, string>, 13> units = {{{1000, "M"},
                                                 {900, "CM"},
                                                 {500, "D"},
                                                 {400, "CD"},
                                                 {100, "C"},
                                                 {90, "XC"},
                                                 {50, "L"},
                                                 {40, "XL"},
                                                 {10, "X"},
                                                 {9, "IX"},
                                                 {5, "V"},
                                                 {4, "IV"},
                                                 {1, "I"}}};

    int romanToInt(string s) {
        int result = 0;
        int number_index = 0, unit_index = 0;
        while (number_index < s.length() && unit_index < units.size()) {
            if (s.compare(number_index, units[unit_index].second.length(),
                          units[unit_index].second) == 0) {
                result += units[unit_index].first;
                number_index += units[unit_index].second.length();
            } else

                unit_index++;
        }

        return result;
    }
};