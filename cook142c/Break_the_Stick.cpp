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
        ll n,x;
        cin >> n >> x;

        if(x%2 != 0){
            cout << "YES\n";
        }
        else{
            if((n-x)%2 == 0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }


    }


    return 0;
}