#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int lucky(int x){
    
    if(x%10 != 4 || x%10 != 7){
        return false;
    }
    return lucky(x/10);
}


int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> w(n);
        for(int i=0;i<n;i++){cin >> w[i];}




       // code goes here
    }

    
    // code goes here
    return 0;
}