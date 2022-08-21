#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(b >= max(a,c)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }


       // code goes here
    }


    // code goes here
    return 0;
}