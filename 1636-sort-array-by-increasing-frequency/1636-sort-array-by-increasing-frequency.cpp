class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int, int> frequency;
    for (auto c : nums) {
        frequency[c]++;
    }
    sort(nums.begin(), nums.end(), [&](char a, char b) {
        if (frequency[a] == frequency[b]) {
            return a > b;
        }
        return frequency[a] < frequency[b];
    });

    return nums;
    }
    
};