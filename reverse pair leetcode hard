void merge(vector<int>& arr,int n ,int st,int mid,int end){
        vector<int>temp;
        int left=st;
        int right=mid+1;
        while(left<=mid && right<=end){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;

            }
            else{
                temp.push_back(arr[right]);
                right++;

            }

        }

        //adding remaining elts 
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;

        }
        while(right<=end){
            temp.push_back(arr[right]);
            right++;

        }

        //adding back to arrays 
        int idx=0;
        for(int i=st;i<=end;i++){
            arr[i]=temp[idx++];

        }

    }

    int count_pairs(vector<int>& arr,int n,int st,int mid,int end){
        int cnt=0;
        int right=mid+1;
        for(int i=st;i<=mid;i++){
            while(right<=end && (long long)arr[i] > 2LL * arr[right]){
                right++;


            }
            cnt+=right-(mid+1);

        }
        return cnt;

    }
    int  mergesort(vector<int>& arr,int n,int st,int end){
        //base case
        int cnt=0;
        if(st>=end){
            return 0;

        } 
        
        int mid=st+(end-st)/2;
        //divide
        cnt+=mergesort(arr,n,st,mid);
        cnt+=mergesort(arr,n,mid+1,end);
        //count reverse pairs 
        cnt+=count_pairs(arr,n,st,mid,end);
        //merge 
        merge(arr,n,st,mid,end);
        return cnt;


    }
    int reversePairs(vector<int>& arr) {
        int n=arr.size();
        return mergesort(arr,n,0,n-1);
        
    }
