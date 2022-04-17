#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        int cnt = 1, j = i;
        while(j < n) {
            if(v[j] < v[j+1]) cnt++;
            else break;
            j++;
        }
        ans = max(ans,cnt);
        i = j;
    }
    cout << ans << endl;
}