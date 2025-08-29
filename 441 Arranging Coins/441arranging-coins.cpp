class Solution {
public:
    int arrangeCoins(int n) {
        long coins = n;   // use long to avoid overflow
        int row = 0;
        while (coins >= row + 1) {
            row++;
            coins -= row;
        }
        return row;
    }
};