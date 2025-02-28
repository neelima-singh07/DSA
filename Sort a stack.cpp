void insertSorted(stack<int> &st,int x){
	if(st.empty() || !st.empty() && st.top()<x){
		st.push(x);
		return;
	}
	int temp=st.top();
	st.pop();
	insertSorted(st,x);
	st.push(temp);

}
void sortStack(stack<int> &st)
{
	// Write your code here
	//base case
	if(st.empty())return;
	int num=st.top();
	st.pop();
	sortStack(st);
	insertSorted(st,num);

	
}
