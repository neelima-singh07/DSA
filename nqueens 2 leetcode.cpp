//same as nqueens 1

bool issafe(vector<string> &board,int i,int j,int n){
        //row check
        for(int col=0;col<n;col++){
            if(board[i][col]=='Q'){
                return false;
            }
            
        }
        //col check
        for(int row=0;row<n;row++){
            if(board[row][j]=='Q'){
                return false;
            }
            
        }
        // left daignol check
        for(int row=i,col=j;row>=0 && col>=0;row--,col--){
            if(board[row][col]=='Q')return false;
        }
        //right daignol check
        for(int row=i,col=j;row>=0 && col<n;row--,col++){
            if(board[row][col]=='Q')return false;
        }
        return true;



    }
    void nqueens(vector<string> &board,int n,int row,vector<vector<string>> &ans){
        //base case
        if(row==n){
            ans.push_back(board);
            return;

        }
        //condition
        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                nqueens(board, n,row+1,ans);//recursive call
                board[row][col]='.'; //backtracking step
            }
        }

    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));  
        vector<vector<string>> ans;  
        nqueens(board, n, 0, ans);
        return ans.size();
        
    }
