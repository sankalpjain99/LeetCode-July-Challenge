class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1]++;
        int carry=0;
        for(int i=n-1;i>=0;i--){
            digits[i]+=carry;
            carry = digits[i]/10;
            digits[i] = digits[i]%10;
            if(!carry)
                break;
        }
        if(carry)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};