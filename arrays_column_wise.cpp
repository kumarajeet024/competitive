//coding blocks: arrays column wise
#include<iostream>
using namespace std;
int main() {
    int m,n,arr[10][10],a=0,i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>arr[i][j];
    for(i=0;i<n;i++)
    if(a<m-1){
    for(j=0;j<m;j++)
    cout<<arr[j][i]<<","<<" ";
    a=j;
    }
    else{
        for(j=m-1;j>=0;j--){
            cout<<arr[j][i]<<","<<" ";
            a=j;
        }
    }
    cout<<"END";
	return 0;
}
