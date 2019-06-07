
//first occurence of a number in array
#include <iostream>

using namespace std;
int bin_search(int a[],int n,int x){
    int s=0,e=6,mid;
    
    int ans;
    while(s<=e){
        mid=(s+e)/2;
    if(a[mid]==x) {
        ans=mid;
        e=mid-1;
    }
    else if(a[mid]>x) {
        e=mid-1;
    
    }
    else s=mid+1;
    }
    return ans;
}

int main() {
	int arr[7]={1,2,2,2,2,4,4};
	int n=7,x;
	cin>>x;
	cout<<bin_search(arr,n,x)<<endl;
	
return 0;
}
