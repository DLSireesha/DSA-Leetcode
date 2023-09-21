class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        double median;
        if(v.size()%2==0){
            median=(v[v.size()/2]+v[(v.size()-1)/2])/2.0;
        }
        else{
            median=v[v.size()/2];
        }
        return median;
    }
};