class Solution {
    public:
    string frequencySort(string s) {
        unordered_map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }
    sort(s.begin(), s.end(), [&](char a, char b) {
        if (frequency[a] == frequency[b]) {
            return a < b;
        }
        return frequency[a] > frequency[b];
    });

    return s;
    }
};