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
        ll l,r;
        cin >> l >> r;

        ll start=l;
        if(start%2 != 0){start+=1;}

        if(start+3<=r){
            int i=0;
            while(i<4){
                cout << start+i << ' '; 
                i++;
            }
            cout << '\n';
        }
        else{
            cout << "-1\n";
        }
    }


    return 0;
}