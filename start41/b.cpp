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

        int n,k;
        cin >> n >> k;

        if(n%2 == 0){
            cout << "Yes\n";
        }
        else{
            if(n == 1){
                if( k == 1){

                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
            }
            else{
                if(k == 1){
                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
            }
            
        }




    }

    return 0;
}