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
        long long n,x,y;
        cin >> n >> x >> y;

        priority_queue<long long, vector<long long>, greater<long long> > q;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            q.push(a);
        }

        for(int i=0;i<y;i++){
            int top = q.top();
            q.pop();
            top = top^x;
            q.push(top);
            if(q.top() == top){
                if((y-i)%2 == 0){
                    q.pop();
                    q.push(top^x);
                }
                break;
            }
        }
        for(int i=0;i<n;i++){
            cout << q.top() << ' ';
            q.pop();
        }
        cout << '\n';



       // code goes here
    }

    // code goes here
    return 0;
}