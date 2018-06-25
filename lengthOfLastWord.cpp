int Solution::lengthOfLastWord(const string A) {
    int i=A.length()-1,j;
    while(A[i]==' ') i--;
    j=i;
    while(i>=0){
        if(A[i]==' ') break;
        i--;
    }
    return (j-i);
}
