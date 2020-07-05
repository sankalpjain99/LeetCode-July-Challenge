class Solution {
public:
    int hammingDistance(int x, int y) {
        long long int ans = x^y;
        int res=0;
        while(ans){
            ans = ans&(ans-1);
            res++;
        }
        return res;
    }
};