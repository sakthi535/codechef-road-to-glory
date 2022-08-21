#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string min(string a, string b){
    for(int i=0;i<a.length();i++){
        if(a[i]>b[i]){
            return b;
        }
        else if(a[i] < b[i]){
            return a;
        }
    }
    return a;
}

string find(string s, int k, int n, int i){
    if(k == 0){
        return "";
    }
    else if(i == n-k){
        return "";
    }
    else{
        string temp = s;
        for(int j=i;j<=k;j++){
            if(s[j] == '0'){temp[j] = '1';}
            else{s[j] = '0';}
        }
        return min(find(s,k,n,i+1), find(temp,k-1,n,i));
    }
}

int main()
{
    fastio;

    int t;
    cin >> t;
    
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;




       // code goes here
    }


    // code goes here
    return 0;
}