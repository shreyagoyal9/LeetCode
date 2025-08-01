class Solution {
public:
    int fib(int n) {
        //for 0,1 directly gives 0,1
        if (n<=1){
            return n;
        }
        //for any other number
        return fib(n-1)+fib(n-2);
        
  return 0;  }
};