

class MinStack {
public:
    stack < long long > st;
    long long mini;
    
    MinStack() {
        while (st.empty() == false) st.pop();
        mini = INT_MAX;
       
        
    }
    
    void push(int val) {
        long long el=val;
        if(st.empty()){
            mini=el;
            st.push(el);
        }
        else{
            if(el<mini){
                st.push(2*el-mini);
                mini=val;
            }
            else{
                st.push(el);
            }
        }
    }
    
    void pop() {
        if(st.empty())return;
        long long el=st.top();
        st.pop();
        if(el<mini){
            mini=2*mini-el;
        }
    }
    
    int top() {
       if(st.empty())return NULL;
       long long el=st.top();
       if(el<mini){
        return mini;
       } 
       return el;
    }
    
    int getMin() {
        return mini;
    }
};
