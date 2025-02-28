//code 
bool checkvalid(vector<vector<int>>& grid,int r,int c,int checkval,int n){
        //base cases
        if(r<0 || c<0 || r>=n ||c>=n||grid[r][c]!=checkval)return false;
        if(checkval==n*n-1)return true;
        //recursion 8 moves  
        int  ans1=checkvalid(grid,r-2,c+1,checkval+1,n);
        int ans2=checkvalid(grid,r-1,c+2,checkval+1,n);
        int ans3=checkvalid(grid,r+1,c+2,checkval+1,n);
        int ans4=checkvalid(grid,r+2,c+1,checkval+1,n);
        int ans5=checkvalid(grid,r+2,c-1,checkval+1,n);
        int ans6=checkvalid(grid,r+1,c-2,checkval+1,n);
        int ans7 = checkvalid(grid, r-1, c-2, checkval + 1, n); // Correct as is
        int ans8 = checkvalid(grid, r-2, c-1, checkval + 1, n);
        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;

    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int checkval=0;
        int n=grid.size();
        return checkvalid(grid,0,0,checkval,n);
        
    }
