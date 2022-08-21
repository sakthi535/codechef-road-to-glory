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
        int x,y;
        cin >> x >> y;
        int m = (x-y)/4;
        
        if(m<0){cout << 0 << "\n";}
        else{
            if((x-y)%4){
                m++;
            }
            cout << m << '\n';
        }
    }
    return 0;
}