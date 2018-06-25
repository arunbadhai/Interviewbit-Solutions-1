void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string st;
    stack<int> s;
    int n=A.length()-1;
    int i=n;
    while(i>=0){
        if(A[i]==' '){
            while(!s.empty()){
                st.push_back(s.top());
                s.pop();
            }
            st.push_back(' ');
        }
        else s.push(A[i]);
        i--;
    }
    //Get the remaining elements from stack
    while(!s.empty()){
        st.push_back(s.top());
        s.pop();
    }
    A=st;
}
