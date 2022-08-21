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
        int a,b;
        cin >> a >> b;

        while(a%2 == 0){a/=2;}
        while(b%2 == 0){b/=2;}


        if(a == b){
            cout << "YES\n";
        } 
        else{
            cout << "NO\n";
        }


    }
    

    // code goes here
    return 0;
}