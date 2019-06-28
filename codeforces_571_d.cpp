#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000009
using namespace std;
#define vec_i vector<int>
#define vec_l vector<long long int>
int wh[100010];
int arr[100010];

int main(){

 		ios_base::sync_with_stdio(false);
 		cin.tie(NULL);
 		#ifndef ONLINE_JUDGE
 		freopen("input.txt", "r", stdin);
 		freopen("output.txt", "w", stdout);
 		freopen("error.txt", "w", stderr);
 		#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int s = 0, k = 0;
    for (int i = 0; i < n; i++) {
        float a;
        cin >> a;
        arr[i] = ceil(a);
        if (arr[i] == a) {
            wh[i] = 1;
            k++;
        }
        s += arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (s == 0) break;
        if (!wh[i]) {
            arr[i]--;
            s--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
 		
	return 0;
}
