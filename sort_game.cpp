//hackerblocks::sanjay's salary

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair<string,int> emp1,pair<string,int> emp2){
    if(emp1.second==emp2.second){
        return emp1.first<emp2.first;
    }
    return emp1.second>emp2.second;
}

int main() {
    int n;
    int min_no;
    pair<string,int> employee[100005];
    cin>>min_no>>n;
    string name;
    int salary;
    for(int i=0;i<n;i++){
        cin>>name>>salary;
        employee[i].first=name;
        employee[i].second=salary;
    }
    sort(employee,employee+n,mycompare);
    for(int i=0;i<n;i++){
        if(employee[i].second>min_no){
            cout<<employee[i].first<<" "<<employee[i].second<<endl;
        }
    }
    
    
    
return 0;
}
