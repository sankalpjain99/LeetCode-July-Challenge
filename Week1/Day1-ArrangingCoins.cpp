class Solution {
public:
    int arrangeCoins(int n) {
        long long int i=1;
        while(true){
            long long int x = (i*(i+1))/2;
            if(x>n)
                break;
            i++;
        }
        return i-1;
    }
};