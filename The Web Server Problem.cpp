#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n; 
    vector<pair<ll, pair<ll, ll>>> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;

    sort(v.begin(), v.end(), [&](auto x1, auto x2)
         {
        if(x1.first==x2.first){
             if(x1.second.first==x2.second.first) return x1.second.second<x2.second.second;
           return x1.second.first>x2.second.first;
        }
        return x1.first<x2.first; });
    for (auto it : v)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
    return 0;
}