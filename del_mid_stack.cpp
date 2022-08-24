class Solution
{
    public:
    //Function to delete middle element of a stack.
    void solve(stack <int>&s, int k)
    {
        if(k==1)s.pop();
        else
        {
            int temp=s.top();
            s.pop();
            solve(s,k-1);
            s.push(temp);
        }
        
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int k=sizeOfStack/2+1;
        solve(s,k);
    }
};
