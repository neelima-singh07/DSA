bool is_safe(vector<string>& board, int n, int i, int j) {
    // Horizontal check
        for (int col = 0; col < n; col++) {
            if (board[i][col] == 'Q') {
               return false;
            }
        }

    // Vertical check
        for (int row = 0; row < n; row++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

    // Right diagonal check
        for (int row = i, col = j; row >= 0 && col < n; row--, col++) {
            if (board[row][col] == 'Q') {
                return false;
            }
        }

    // Left diagonal check
        for (int row = i, col = j; row >= 0 && col >= 0; row--, col--) {
            if (board[row][col] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nqueen(vector<string>& board, int n, int i, vector<vector<string>>& ans) {
    // Base case
        if (i == n) {
            ans.push_back(board);
            return;
        }

    
        for (int j = 0; j < n; j++) {
            if (is_safe(board, n, i, j)) {
                board[i][j] = 'Q';  // Place queen
                nqueen(board, n, i + 1, ans);  // Recursion
                board[i][j] = '.';  // Backtrack
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));  // Initialize board
        vector<vector<string>> ans;  
        nqueen(board, n, 0, ans);
        return ans;
        
    }
