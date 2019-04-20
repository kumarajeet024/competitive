//codeforces::even subtrings
#include <bits/stdc++.h>

using namespace std;

    int fun(string str,int n) 
{ 
 
    int count = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        int temp = str[i] - '0'; 
  
        if (temp % 2 == 0) 
            count += (i + 1); 
    } 
  
    return count; 
} 
  
// Driven Program 
int main() 
{ 
    string str;
    int n;
    cin>>n;
    cin>>str;
    cout <<fun(str,n) << endl; 
    return 0; 
} 
