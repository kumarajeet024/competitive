#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c1,c2,c3,c4;
	    int m,n;
	    int *arr = new int[n];
	    int *brr = new int[m];
	    cin>>c1>>c2>>c3>>c4;
	    cin>>m>>n;
	    for(int i=0;i<m;i++) cin>>arr[i];
	    for(int i=0;i<n;i++) cin>>brr[i];
	    int rick_sum=0,cab_sum=0,final_sum=0;
	   // rick_sum = rick_sum + min(n*c1,c2);
	   // cab_sum = cab_sum + min(m*n, c2);
	    
	    for(int i=0;i<m;i++){
	        rick_sum = rick_sum+ min(arr[i]*c1, c2);
	    }
	    for(int i=0;i<n;i++){
	        cab_sum = cab_sum+ min(brr[i]*c1, c2);
	    }
	    rick_sum = min(rick_sum, c3);
	    cab_sum = min(cab_sum,c3);
	    final_sum = min(rick_sum+cab_sum, c4);
	    cout<<final_sum<<endl;
	}
}
