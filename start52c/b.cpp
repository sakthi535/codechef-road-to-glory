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
        int n;
        cin >> n;

        vector<int> Size(n);
        string res;
        for(int i=0;i<n;i++){
            cin >> Size[i];
        }

        cin >> res;

        int mn=101;
        for(int i=0;i<n;i++){
            if(res[i] == 0){
                mn = min(mn, Size[i]);
            }
        }

        cout << mn << '\n';




       // code goes here
    }


    // code goes here
    return 0;
}