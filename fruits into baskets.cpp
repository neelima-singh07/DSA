using two pointers and sliding window 

int l=0;
int r=0;
int maxlen=0;
unordered_map<int,int>mpp;
while(r<arr.size()){
      mpp[arr[r]]++;
      if(mpp.size()<=2){
            maxlen=max(maxlen,r-l+1);
            r++;
      }

      else{
           while(mpp.size()>2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                l++;
            }
            r++;
      }


}
return maxlen;
