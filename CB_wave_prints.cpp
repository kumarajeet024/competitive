#include<iostream>
using namespace std;
int main() {
    int n,arr[n],target;
    cin>>n;
for(int i=0;i<n;i++) cin>>arr[i];
cin>>target;
for(int i=0;i<n;i++){
    int a= target-arr[i];
    for(int j=0;j<n;j++)
    {
        if(arr[j]==a){
        cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
        
        else continue;
    }
}
	return 0;
}
