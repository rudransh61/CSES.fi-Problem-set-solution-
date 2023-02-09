#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n; // inputs
    long long int arr[n];

    long long int res = 0; // answer to maximize
    long long int maxi = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i]; // inputs
        maxi = max(maxi, arr[i]); // maximize
        res += (maxi-arr[i]); //add
    }
    cout<<res<<endl; // output

    return 0;
}