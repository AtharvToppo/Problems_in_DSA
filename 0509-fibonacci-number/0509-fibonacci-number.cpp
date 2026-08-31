class Solution {
public:
    int fibnum(int num)
    {
        // Base case
        if(num<=1)
        {
            return num;
        }

        // logic for finding fibonacci series
        return fibnum(num-1)+fib(num-2);
    }
    int fib(int n)
    {
        return fibnum(n);
    }
};