class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        int n = N%14==0?14:N%14;
        while(n--){
            vector<int> ans(8,0);
            for(int i=1;i<7;i++){
                if(cells[i-1]==cells[i+1])
                    ans[i] = 1;
                else
                    ans[i]=0;
            }
            cells = ans;
        }
        return cells;
    }
};