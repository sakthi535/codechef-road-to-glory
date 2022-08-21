#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

struct Disjoint{

    vector<int> parent;
    vector<int> rank;

    Disjoint(int n){
        parent.resize(n);
        rank.resize(n);

        for(int i=0;i<n;i++){
            parent[i] = i;
            rank[i] = 1;
        }
    }

    int find(int i){
        if(parent[i] == i){
            return i;
        }
        return parent [i] = find(parent[i]);
    }

    void union_set(int a, int b){
        if(a == b){return ;}
        if(rank[a] < rank[b]){
            swap(a,b);
        }

        parent[b] = a;
        rank[a] += rank[b];

    }

};


int main()
{
    fastio;

    int n,q,a;
    cin >> n>> q;

    Disjoint S(n);

    for(int i=0;i<q;i++){
        cin >> a;
        int x,y;
        cin >> x >> y;
        if(a){
            if(S.find(x) == S.find(y)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            S.union_set(x,y);
        }

    }


    // code goes here
    return 0;
}