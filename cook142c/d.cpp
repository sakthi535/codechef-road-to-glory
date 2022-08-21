#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

#define ll long long

using namespace std;

int main()
{
    fastio;
    
    int t;
    cin >> t;
    
    while(t--)
    {

        ll n;
        cin >> n;

        ll m = n-2;
        if(n%2 == 1){
            cout << (n/2)* ((n/2)+ 1) -1 << '\n';
        }
        else{   
            ll a = n/2;
            if(a%2 == 0){
                cout << (a-1)*(a+1) -1 << '\n';
            }
            else{
                m = max(m, (a-2)*(a+2) -1);
                cout << m << '\n';
            }
        }   
    }


    return 0;
}