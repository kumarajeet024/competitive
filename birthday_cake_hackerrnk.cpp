// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n,count =0,arr[n];
//     //int *arr = new int[n];

//     cin>>n;
//     for(long long i=0;i<n;i++) cin>>arr[i];
//     long long *i1;
//     i1 = std::max_element(arr,arr+n);
//     //cout<<*i1;
//     for(long long i=0;i<n;i++){
//         if(arr[i]==*i1)
//         count++;
//     }
//     cout<<count;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,n,h = -1,count = 0;
    vector<int> ar;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a >= h)ar.push_back(h = a);
    }

    for(int i = 0; i < ar.size(); i++){
        if(ar[i] == h)count++;
    }
    cout <<count << endl;
}
