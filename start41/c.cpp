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
        ll n,k;
        cin >> n >> k;
        if(k == 1){
            if(n%2 == 0){
                cout << "EVEN\n";
            }
            else{
                cout << "ODD\n";
            }
        }
        else{
            if((k-1)%2 == 0){
                cout << "EVEN\n";
            }
            else{
                cout << "ODD\n";
            }
        }


    }
    return 0;
}