//https://cses.fi/problemset/task/1068

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //inputs
    long long int n;
    cin>>n;
    //while n is not 1
    cout<<n<<" "; // print 1st number
    while(n!=1){
        // if n is odd
        if(n&1){
            n = n*3 + 1; // multiply 3 and add 1
            cout<<n<<" "; // print the result
        }
        // if n is even
        else{
            n = n/2; // half the result
            cout<<n<<" "; // print the result
        }
    }
    // done
    return 0;
}
