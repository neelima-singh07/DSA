//easiest way with O(nlogn) &O(1)
sort(arr.begin(),arr.end());

//second approach O(N) & O(1) but this requires counting and lots of passes 
void sortColors(vector<int>& arr) {
        int count0=0;
        int count1=0;
        int count2=0;

        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;

            }
            else if(arr[i]==1){
                count1++;

            }
            else{
                count2++;
            }

        }
        

        for(int i=0;i<count0;i++){
            arr[i]=0;
        }

        for(int i=count0;i<count0+count1;i++){
            arr[i]=1;
        }

        for(int i=count0+count1;i<arr.size();i++){
            arr[i]=2;
        }

        
        
    }

// dutch national flag algorithim O(N) and O(1)

        int low=0;
        int mid=0;
        int high=arr.size()-1; //using three pointers 
        while(mid<=high && high<arr.size()){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;

            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
            

        }
        
        

  

