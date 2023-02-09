#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n ; // inputs
    if(n==1){
        cout<<n<<endl;
    }
    if(n<4){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(n==4){
        cout<<"2 4 1 3 "<<endl; //1 soln
    }
    else{
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 2; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}