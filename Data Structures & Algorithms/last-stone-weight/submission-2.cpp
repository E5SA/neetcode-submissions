class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stones_list(stones.begin(), stones.end());
        while (stones_list.size() > 1) {
            int x = stones_list.top();
            stones_list.pop();
            int y = stones_list.top();
            stones_list.pop();
            if (x - y != 0) stones_list.push(x - y);
        }

        return stones_list.empty() ? 0 : stones_list.top();
    }
};
