//1374A - Required Remainder

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x , y , n ;
    cin >> x >> y >> n ;
    long long cnt = n / x ;
    long long ans = x * cnt + y ;
    if (ans > n){
        ans -= x ;
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }
    
    return 0 ;
}
