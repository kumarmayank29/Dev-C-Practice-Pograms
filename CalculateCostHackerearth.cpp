//X    -Penalty he has to pay if he forgets cost of any one item 
//k    -Maximum distinct prices he can remember
//price-Array of prices of N items
//N   -Total Items
#include<bits/stdc++.h>
using namespace std;
long long getCost (int X, int k, vector<int> price, int N) {
 sort(price.begin(),price.end());
 
 long long cnt=0;
 for(int i=0;i<N;i++)
 {
     while(i<N-1 && price[i]==price[i+1])
     {
         i++;
     }
     cnt++;
 }
 if(cnt<=k)
 return 0;
 else
 return (cnt-k)*X;


}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int k;
        cin >> k;
        int X;
        cin >> X;
        vector<int> price(N);
        for(int i_price=0; i_price<N; i_price++)
        {
        	cin >> price[i_price];
        }

        long long out_;
        out_ = getCost(X, k, price, N);
        cout << out_;
        cout << "\n";
    }
}
