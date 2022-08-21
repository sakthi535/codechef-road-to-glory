#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
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

        vector<int> A(n);
        int ans=0;
        for(int i=0;i<n;i++){cin >> A[i];ans += A[i];}

        sort(A.begin(), A.end());


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(A[j] % A[i] != 0){
                    ans = n;
                }
                else{
                    A[j] = gcd(A[i], A[j]);
                    // A[i] = gcd(A[i], A[j]);
                }
            }
        }

        int temp = 0;
        for(int i:A){
            temp = temp+i;
        }

        cout << min(temp, ans) << '\n';



    }

    return 0;
}