bool issafe(vector<vector<char>>& board, char c, int row, int col){
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == c) {
                return false;
            }
            if (board[row][i] == c) {
                return false;
            }
            if (board[3*(row/3) + i/3][3*(col/3) + i%3] == c) {
                return false;
            }
        }
        return true;
    }
    bool solver(vector<vector<char>>& board, int r, int c) {
    
        if (r == 9) {
            return true;
        }

    
        if (c == 9) {
            return solver(board, r + 1, 0);
        }

    
        if (board[r][c] != '.') {
            return solver(board, r, c + 1);
        }    

    
        for (char num = '1'; num <= '9'; num++) {
            if (issafe(board, num, r, c)) {
                board[r][c] = num; // Assign number
                if (solver(board, r, c + 1)) {
                    return true;  
                }
                board[r][c] = '.';  // Backtrack if not solvable
            }
        }
        return false; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        solver(board, 0, 0);
    }
