//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        int single, twice, not_thrice;
        single = 0;
        twice = 0;
        not_thrice = 0;
        int x;
        
        for(int i=0;i<N;i++)
        {
            x = arr[i];
            twice |=single&x;
            single ^=x;
            
            not_thrice = ~(single&twice);
            single &= not_thrice;
            twice &= not_thrice; 
        }
        return single;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends