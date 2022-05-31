#include<bits/stdc++.h>
using namespace std;

long long getCount (vector<int> price, int N) {
 sort(price.begin(),price.end());
 //Method 1
 int cnt=0;
 for(int i=0;i<N;i++)
 {
     while(i<N-1 && price[i]==price[i+1])
     {
         i++;
     }
     cout<<price[i]<<" ";
     cnt++;
 }

////Method 2
//unique(price.begin(),price.end());
//for(int i=0;i<price.size();i++)
//{
//	cout<<price[i]<<" ";
//}

// price.erase(unique(price.begin(),price.end()),)
 return cnt;


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
        vector<int> price(N);
        for(int i_price=0; i_price<N; i_price++)
        {
        	cin >> price[i_price];
        }

        long long out_;
        out_ = getCount(price, N);
        cout << out_;
        cout << "\n";
    }
}
