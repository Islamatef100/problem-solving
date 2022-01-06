//489B - BerSU Ball


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, pairs=0;
    cin >> n;
    int *ai=new int[n];
    
    for (int i = 0; i < n; i++)
    cin >> ai[i];
    
    cin >> m;
    int *bi=new int[m];
    
    for (int i = 0; i < m; i++)
    cin >> bi[i];
    
    sort(ai, ai + n);
    sort(bi, bi + m);
    
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    if (abs(ai[i] - bi[j]) < 2)//abs bcouse i dont care by positive or nagitive.
    {
        bi[j] = 1000;
        pairs++;
        break;
    }
    
    cout << pairs << endl;
    return 0;
}



