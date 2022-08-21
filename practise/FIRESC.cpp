#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Disjoint{
    public:

        vector<int> parent;
        vector<int> rank;


        Disjoint(int n){
            parent.resize(n+1);
            rank.resize(n+1);

            for(int i=1;i<=n;i++){
                parent[i] = i;
                rank[i] = 1;
            }
        }

        int find(int i){
            if(parent[i] = i){
                return i;
            }
            return find(parent[i]);
        }

        void union_set(int a, int b){
            if(find(a) == find(b)){
                return;
            }
            if(rank[a] <rank[b]){
                swap(a,b);
            }
            parent[b] = a;
            rank[a] += rank[b];

        }
};

int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {
        int n,m;
        cin >> n >> m;

        Disjoint S(n);

        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            
            S.union_set(x,y);

            cout << "Parent ";
            for(auto i:S.parent){
                cout << i << ' ';
            }
            cout << '\n';
            cout << "Rank ";
            for(auto i:S.rank){
                cout << i << ' ';
            }
            cout << "\n\n";
        }

        




    }


    // code goes here
    return 0;
}