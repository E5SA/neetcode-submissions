class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone_list(stones.begin(), stones.end());
        while (stone_list.size() > 1) {
            int x = stone_list.top();
            stone_list.pop();
            if (x == stone_list.top()) {
                stone_list.pop();
                continue;
            }
            int result = abs(x - stone_list.top());
            stone_list.pop();
            stone_list.push(result);
        }

        if (stone_list.size() == 0) return 0;

        return stone_list.top();
    }
};
