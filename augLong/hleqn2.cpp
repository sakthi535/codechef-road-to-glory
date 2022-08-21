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
        bool flag = true;

        // cout << ((n-2)%3 == 0) << "*\n";


        for(int b=1;b<sqrt(n);b++){
            if(n<5){
                cout << "NO\n";
                flag = false;
                break;
            }
            if( (n-2*b)%(b+2) == 0){
                cout << "YES\n";
                flag = false;
                // cout << b << "\n";
                break;
            }
        }
        if(flag){

            cout << "NO\n";
        }
        



       // code goes here
    }

    return 0;
}