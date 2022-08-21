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
        int n;
        cin >> n;

        vector<int> A(n-1,0);

        for(int i=1;i<n;i++){cin >> A[i-1];}


        int i=1;
        int j=0;
        int ex=0;
        int time=A[0];


        while(j<n-1){
            if(i >= n-1){
                time += A[j++];
            }
            else{
                if(A[i] <= A[j]){
                    ex += A[j]-A[i];
                }
                else{
                    time += A[i++];
                    j++;
                }


            }

            // i++;
            // j++;
        }

        cout << time << '\n';
       // code goes here
    }


    // code goes here
    return 0;
}