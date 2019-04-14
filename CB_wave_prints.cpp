//coding blocks array wave prints
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,arr[n],target;
    cin>>n;
for(int i=0;i<n;i++) cin>>arr[i];
cin>>target;
sort(arr,arr+n);
int left=0,right=n-1;
// for(int i=0;i<n-2;i++){
//     int a= target-arr[i];
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[j]==a){
//         cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
//         }
//         else continue;
//     }
// }
while(left<right){
    if((arr[left]+arr[right])==target){
    cout<<arr[left]<<" "<<"and"<<" "<<arr[right]<<endl;
        left++;
        right--;
    }
 if((arr[left]+arr[right])<target) left++;
    else right--;
}
	return 0;
}
