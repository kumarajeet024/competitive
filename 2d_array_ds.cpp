
//hackerrank::2d array ds
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[6][6];
	vector<int> ans;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>arr[i][j];
		}
	}
	int sum,a;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			sum=a;
			 a = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i-1][j-1];
			// sum+=a;
			 //max_sum = max(sum,a);
			 ans.push_back(a);
		}
		
	}
	// auto max_sum = max_element(ans.begin(),ans.end());
	// cout<<auto(max_sum);
	sort(ans.begin(),ans.end());
	cout<<ans[ans.size()-1];
	
	return 0;
}
