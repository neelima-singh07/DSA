//Imp take care of edge cases 
bool isPerfectSquare(int  num) {
        long long st= 1;
        long long  end=num;
        while(st<=end){
            long long  mid=st+(end-st)/2;
            long long x=mid*mid;
            if( x==num){
                return true;
            }
            else if(x<num){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
        
}
