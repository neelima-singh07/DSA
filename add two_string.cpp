 string  add(string num1,string  num2){
        int index1=num1.size()-1;
        int index2 =num2.size()-1;
        string ans ;
        int sum=0;
        int carry =0;
        while(index2>=0){
            sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
            
            carry=sum/10;
            char c=sum%10+'0';
            ans+=c;
            index1--,index2--;

            

        }
        while(index1>=0){
            sum=(num1[index1]-'0')+carry;
            
            carry=sum/10;
            char c=sum%10+'0';
            ans+=c;
            index1--;
        }
        if(carry){
            ans+='1';

        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
    string addStrings(string num1, string num2) {
        if(num1.size()>num2.size()){
            return add(num1,num2);
            

        }
        else{
            return add(num2,num1);
        }
       
        

    }
