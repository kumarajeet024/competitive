//codeforces::maxim biology
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
int n;
string s;
cin>>n;
cin>>s;
//string str = "ACTG";
int arr[n-3]={0};
int count=0;
for(int i=0;i<n-3;i++){
    count =0;
   count+=min(abs(s[i]-'A'),26-abs(s[i]-'A'));
   count+=min(abs(s[i+1]-'C'),26-abs(s[i+1]-'C'));
      count+=min(abs(s[i+2]-'T'),26-abs(s[i+2]-'T'));

   count+=min(abs(s[i+3]-'G'),26-abs(s[i+3]-'G'));
arr[i]=count;
}
int *ans=min_element(arr,arr+n-3);
cout<<*ans<<endl;

return 0;
}
