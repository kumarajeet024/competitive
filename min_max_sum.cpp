//hackerrank:min max sum
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll arr[5];
    for(int i=0;i<5;i++) cin>>arr[i];
    sort(arr,arr+5);
    ll min_sum = arr[0]+arr[1]+arr[2]+arr[3];
    ll max_sum = arr[4]+arr[1]+arr[2]+arr[3];
    cout<<min_sum<<" "<<max_sum;
    return 0;
}
