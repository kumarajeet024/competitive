//hackerrank:: leanardo and primes
#include <bits/stdc++.h>

using namespace std;
vector<int> vect{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int prime(long long n){
    if(n==1) return 0;
    int count=0;
    long long int product=1;
    for(long long int i=1;i<=n;i++){
        
        for(int i=0;i<15;i++){
                      product*=vect[i];
          if(product<=n) {count ++; continue;}
          else break;
    
    
        }
        return count;
    }
    return 0;
}
int main() {
    int q;
    cin>>q;
    while(q--){
        long long int n;
        //set<int> sec;
        
        cin>>n;
        
             

        
        // if(n%2==0) {
        //         multi*=2;
        //         if(multi<=n)count++;
        
        //     }
        //     if(n%3==0) {
        //         multi*=3;
        //         if(multi<=n)count++;
                    
        //     }
        // for(long long int i=1;i<=n;i++){
        //     auto a= 6*i-1;
        //     auto b=6*i+1;
            
        //     if(n%a==0) {
        //         multi*=a;
        //         if(multi<=n)count++;
        //         else break;
                        
        //     }
        //     if(n%b==0) {multi*=b;
        //         if(multi<=n)count++;
        //     else break;
                
        //     }
        // }
        //int size = sec.size();
        cout<<prime(n)<<endl;
    }
    return 0;
}
