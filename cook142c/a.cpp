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

        int n,a;
        cin >> n;

        vector<int> A;

        for(int i=0;i<n;i++){cin >> a; A.push_back(a);}

        int m = A.at(0) + A.at(n-1);
        for(int i=0;i<n-1;i++){
            m = max(m, A.at(i)+A.at(i+1));
        }

        cout << m << '\n';
    }

    return 0;
}