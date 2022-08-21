#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here

    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k,a;
        cin >> n >> k;

        vector<int> nums;
        for(int i=0;i<n;i++){cin >> a; nums.push_back(a);}
        
        sort(nums.begin(), nums.end(), greater<int>());

        int i=0, ans=0;
        while(nums.at(i)>= k){
            i++;
        }
        ans=i;

        



    }

    return 0;
}