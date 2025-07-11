#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[0]) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}