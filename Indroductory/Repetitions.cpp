#include<bits/stdc++.h>
using namespace std;

int main(){
    //input the string
    string str;
    cin>>str;
    int n = str.size(); // size of the string
    int i=1; // pointer to traverse
    int ans = 0; // number to maximize
    for (int i = 0; i < n;) {  //traverse the string
        int j = i;
        while (j < n && str[j] == str[i]) {  // count the answer
            j++;
        }
        ans = max(ans, j - i); // maximize answer
        i = j;
    }
    cout<<ans<<endl; // print the answer
}