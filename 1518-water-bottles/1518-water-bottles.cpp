class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        
       
        while (numExchange <=numBottles)
        { 
           int newb =numBottles / numExchange;
           int remain = numBottles % numExchange;
           ans = ans + newb;
           numBottles= newb + remain;        
        }return ans;
        
    }
    
};