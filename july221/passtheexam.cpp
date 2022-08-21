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

        bool secA = a>=10;
        bool secB = b>=10;
        bool secC = c>=10;
        bool sec = a+b+c>=100;

        if(sec && secA && secB && secC){cout << "YES\n";}
        else{cout << "NO\n";}



       // code goes here
    }



    // code goes here
    return 0;
}