class Solution {
public:
    int reverse(int x) {
        int reverseno=0;
        
        while(x!=0){
          int lastdigit=x%10;
          if((reverseno>INT_MAX/10)||(reverseno<INT_MIN/10)){
            return 0;
          }
          reverseno=(reverseno*10)+lastdigit;
            
            x=x/10;
            }
            // do not use cout and return 0, it will give error
            return reverseno;
         
       
    } 
};