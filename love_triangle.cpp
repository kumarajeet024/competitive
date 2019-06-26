/*
// Sample code to perform I/O:
#include <stdio.h>
 
int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll fun(ll n){
    if(n<9) return n;
    else return (n%9+10*fun(n/9));
}
int main(){
    ll n;
    while(!cin.eof()){
    cin>>n;
    cout<<fun(n)<<endl;
    }
    return 0;
}
