#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool findAB(long long n,long long s, int i, int j){
    if(n == s){
        // cout << i << " " << j << "\n";
        return true;
    }
    else{
        if(n>s){
            if(findAB(n, s+2+i,i, j+1)){
                return true;
            }
            return findAB(n, s+2+j,i+1, j);
        }
    }
    return false;
}



int main()
{
    fastio;

    int t;
    cin >> t;

    while(t--)
    {
        long long x;
        cin >> x;

        if(findAB(x,5,1,1)){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO\n";
        }



       // code goes here
    }


    // code goes here
    return 0;
}