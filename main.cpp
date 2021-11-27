#include <bits/stdc++.h>
#define ll long long
#define f first
#define se second
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/34/141

using namespace std;

typedef pair<ll,ll> ii;
ii a[2];
ll maxw,maxval=0;

int main()
{
    for (int i=0; i<2; i++) {
        cin>>a[i].f>>a[i].se;
    }
    cin>>maxw;
    sort(a,a+2,greater<ii>());
    for (int i=0; i<2; ++i) {
        if (maxw>=a[i].se) {
            maxw-=a[i].se;
            maxval+=a[i].f;
        }
    }
    cout<<maxval;
    return 0;
}
