class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        char grid[81];

        int idx = 0;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                grid[idx++] = board[i][j];

        int rows[9] = {0};
        int cols[9] = {0};
        int boxes[9] = {0};

        int r = 0, c = 0;
        for (int i = 0; i < 81; i++) {
            char ch = grid[i];
            if (ch != '.') {
                int bit = 1 << (ch - '1');
                int box = (r / 3) * 3 + (c / 3);
                if (rows[r] & bit || cols[c] & bit || boxes[box] & bit)
                    return false;
                
                rows[r] |= bit;
                cols[c] |= bit;
                boxes[box] |= bit;
            }
            c++;
            if (c == 9) {
                c = 0;
                r++;
            }
        }
        return true;
    }
};
