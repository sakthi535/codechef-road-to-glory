#include <bits/stdc++.h>
using namespace std;

/*
Given an unsorted array of integers, find the longest consecutive elements sequence that can be extracted out of it. For example, Given [100, 4, 200, 1, 3, 2, 5], The longest consecutive elements sequence that we can extract is [1, 2, 3, 4]. 

*/

// A = [4, 1, 2, 3, 5]
// map = [4, 1, 1, 1, 5]

int main(){

    int n,a;
    cin >> n;

    vector<int> A;
    for(int i=0;i<n;i++){cin >> a; A.push_back(a);}

    unordered_map<int, int> store;
    for(int i:A){store[i] = 1;}

    int res=0;

    for(int i=0;i<n;i++){
        
        if(store[A[i]] == 1){
            int j=1;
            while(store[A[i]-j]  == 1){  
                j++;
            }
            if(j == 1){
                store[A[i]] = store[A[i]-1] +1;
                res = max(res, store[A[i]-1] +1);
            }
            else{
                store[A[i]-j+1] = j;
                store[A[i]] = j;
            }
             
        }
    }

    cout << res << '\n';
}