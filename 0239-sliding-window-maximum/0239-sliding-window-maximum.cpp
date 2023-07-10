class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        deque<int> q;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(!q.empty() && q.front()==i-k) q.pop_front();
            while(!q.empty() && nums[q.back()]<nums[i]) q.pop_back();
            q.push_back(i);
            if(i>=k-1) ans.push_back(nums[q.front()]);
        }
        return ans;
    }
    
};
//Time complexity is O(n)

//below code is own logic but time complexity is more O(n*k)
//vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        vector<int> queue;
//        int i=0,j=k-1;
//        while(j<nums.size()){
//            int m=INT_MIN,index=i;
//            for(int p=i;p<=j;p++){
 //               if(nums[p]>nums[index])
  //              index=p;
   //         }
    //        queue.push_back(nums[index]);
     //       i++;
      //      j++;
       // }
        //return queue;