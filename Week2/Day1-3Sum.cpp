class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        int n = a.size();
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--){
            int x=0;
            int y=i-1;
            while(x<y){
                int mid = a[x]+a[y]+a[i];
                if(mid==0){
                    ans.push_back({a[x],a[y],a[i]});
                    int temp=a[x];
                    while(x<y && a[x]==temp)
                        x++;
                }
                else if(mid>0)
                   y--;
                else
                   x++;
            }
            while(i>1 && a[i]==a[i-1])
                i--;
        }
        return ans;
    }
};