//array left rotation
#include <iostream>

using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    int arr[n],ans[n];
    for(int i=0;i<n;i++) cin>>arr[i];
//     for(int i=0;i<n;i++){
//         ans[q-i]=arr[i];
//     }
//     for(int i=0;i<n;i++) cout<<ans[i];
    for(int i=0;i<q;i++){
            int temp = arr[0],j; 
    for ( j = 0; j < n - 1; j++) 
        arr[j] = arr[j + 1]; 
  
    arr[j] = temp; 

    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
