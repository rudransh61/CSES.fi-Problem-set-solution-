#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; // inputs
    vector <int> arr(n-1); // array of n size  (size is n-1 because 1 number is missing from n numbers)
    for(int i=0; i<n-1; i++){
        cin>>arr[i]; // input array
    }

    sort(arr.begin(),arr.end()); // sorting the array
    int ans = -1;
    for(int i=0; i<n; i++){
        if(arr[i]!=i+1){ // if arr(i) is not the index
            ans = i; // return ans
            break; // stop iteration
        }
    }
    cout<<ans+1<<endl; // print answer
    return 0;
}