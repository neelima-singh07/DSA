
#first naive approach with space complexity of O(n)
public:
    void moveZeroes(vector<int>& arr) {
        vector<int>temp(arr.size(),0);
        int index=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                temp[index]=arr[i];
                index++;


            }

        }

        for(int i=0;i<index;i++){
            arr[i]=temp[i];

        }
        for(int i=index;i<arr.size();i++){
            arr[i]=0;

        }
        
    }
};

#second two pointers approach 


#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0; // Pointer to track position for non-zero elements

    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[j], arr[i]); // Swap non-zero element with the element at index j
            j++; // Move j forward
        }
    }
}
