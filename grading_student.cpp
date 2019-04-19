//hackerrank :: grading student
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>=38){
            int a=arr[i]%5;
            if(a>=3){
                int b=5-a;
                arr[i]=arr[i]+b;
            }
            //else arr[i]=arr[i]-a;
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}
