int sameSize(string& A, string& B)
{
    int l1 = A.length();
    int l2 = B.length();
    if (l1<l2)
    {
        for (int i=0;i<l2-l1;i++)
            A='0'+ A;
        return l2;
    }
    for (int i = 0 ; i < l1 - l2 ; i++)
        B= '0'+B;
    return l1;
}
//Implementation of full adder for a, b and carry \
    sum=a xor b xor prev_carry(c) \
    carry=(a.b)+(b.c)+(c.a);
string Solution::addBinary(string A, string B){
    int len =sameSize(A, B);
    int carry =0;
    string ans="";
    for (int i = len-1; i>= 0; i--)
    {
        int a1= A.at(i) - '0';
        int a2 = B.at(i) - '0';
        int sum = (a1 ^ a2 ^ carry)+'0';
        carry = (a1&a2)|(carry&a2)|( a1&carry);
        ans=(char)sum+ans;
    }
    if (carry)
        ans= '1' + ans;
    return ans;
}
