class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone_list(stones.begin(), stones.end());
        while (stone_list.size() > 1) {
            int x = stone_list.top();
            stone_list.pop();
            int y = stone_list.top();
            stone_list.pop();
            if (x - y != 0) stone_list.push(x - y);
        }

        if (stone_list.size() == 0) return 0;

        return stone_list.top();
    }
};
