using backtracking and recursion 

bool search(vector<vector<char>>& board,int i,int j,int m,int n,int idx,string word){
        //base cases
        if(idx==word.size())return true;
        if(i>=m || j>=n || i<0 || j<0 || board[i][j]!=word[idx] || board[i][j]=='#')return false;
        //calls
        char c=board[i][j];
        board[i][j]='#';
        bool op1=search(board,i+1,j,m,n,idx+1,word);
        bool op2=search(board,i-1,j,m,n,idx+1,word);
        bool op3=search(board,i,j+1,m,n,idx+1,word);
        bool op4=search(board,i,j-1,m,n,idx+1,word);
        //again adding word 
        board[i][j]=c;
        return op1|| op2||op3||op4;


    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0])
                    if(search(board,i,j,m,n,0,word))return true;
            }
        }
        return false;
    }
