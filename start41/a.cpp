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
    
    while(t--){

        int x,y;
        cin >> x >> y;

        if(x<y){
            cout << y-x << '\n';
        }
        else{
            if((x-y)%2 == 0){
                cout << (x-y)/2 << '\n';
            }
            else{
                cout << (x+1-y)/2 +1<< '\n';
            }
        }

    }
    
    return 0;
}