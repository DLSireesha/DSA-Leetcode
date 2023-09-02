class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp1(n+1,0);
        vector<int> dp2(n+1,0);
        vector<int> temp1;
        vector<int> temp2;
        if(n==0) return 0;
        if(n==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=(n-1)) temp2.push_back(nums[i]);
        }
        int ans1;
        if(temp1.size()==0){
            ans1=0;
        }else if(temp1.size()==1){
            ans1=temp1[0];
        }else{
        dp1[0]=temp1[0];
        dp1[1]=max(temp1[0],temp1[1]);
        for(int i=2;i<temp1.size();i++){
            dp1[i]=max(temp1[i]+dp1[i-2],dp1[i-1]);
        }
        ans1=dp1[temp1.size()-1];
        }
        int ans2;
        if(temp2.size()==0){
            ans2=0;
        }else if(temp2.size()==1){
            ans2=temp2[0];
        }else{
        dp2[0]=temp2[0];
        dp2[1]=max(temp2[0],temp2[1]);
        for(int i=2;i<temp2.size();i++){
            dp2[i]=max(temp2[i]+dp2[i-2],dp2[i-1]);
        }
        ans2=dp2[temp2.size()-1];
        }
        return max(ans1,ans2);
    }
};