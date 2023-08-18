//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution {
public:
    vector<int> leaders(int a[], int n) {
        vector<int> v;
        int maxRight = a[n - 1];  // Initialize the maximum element from the right
        
        // The last element is always a leader
        v.push_back(maxRight);
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= maxRight) {  // Check if the current element is greater than or equal to the maximum element
                maxRight = a[i];
                v.push_back(maxRight);  // Add the new leader to the result
            }
        }
        
        reverse(v.begin(), v.end());  // Reverse the result to maintain the original order
        return v;
    }
};


//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends