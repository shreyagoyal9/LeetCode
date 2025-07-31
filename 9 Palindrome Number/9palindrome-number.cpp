class Solution {
public:
    bool isPalindrome(int x) {
        long long lastdigit=0;
        // i took duplicate because x is updating so it might have compared 
        //with the last left out x everytime.
        long long duplicatte=x;
        long long reverseno=0;
        while(x>0){
            //extraction of each last digit
        lastdigit=x%10;
        x=x/10;
        // storing the whole reversedno.
        reverseno=reverseno*10+lastdigit;
        }
       
        if(reverseno==duplicatte){
           return true;
        
        }return 0;
    } 
};