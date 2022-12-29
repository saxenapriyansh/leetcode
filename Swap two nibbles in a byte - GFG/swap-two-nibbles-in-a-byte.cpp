//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int swapNibbles(int N){
       return (N>>4) + ((N&15)<<4);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends