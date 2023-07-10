//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        vector<int>mp(26,0);
        int maxi=0;
        int i=0,j=0;
        while(j<s.size())
        {
                mp[s[j]-'a']++;
                
                while(mp[s[j]-'a']>1)
                {
                    mp[s[i]-'a']--;
                    i++;
                }
                    maxi=max(j-i+1,maxi);
                    j++;
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends