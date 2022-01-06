//1343C - Alternating Subsequence
using namespace std;
#include <iostream>
#define pb              push_back
#define mp              make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)//i liked by this code.
#define inf             1e9+7
int main() {
    w(t) {
        long long n; cin >> n;
        long long A[n];
        for ( long long i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        long long mx = -inf, csum = 0, len = 0;
        long long last = A[0];
        csum += last;
        // ll last = A[0];
        bool lookPositive = false;
        if (A[0] < 0) lookPositive = true;
        for ( long long i = 1; i < n; i++)
        {
            if ((A[i] > 0) == lookPositive)
            {
                last = A[i];
                csum += last;
                lookPositive = !lookPositive;
            } else
            {
                mx = max(last, A[i]);
                if (mx > last) {
                    csum -= last;
                    csum += mx;
                    last = mx;
                }
            }
        }
        cout << csum << endl;
    }
    return 0;
}
