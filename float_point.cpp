#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>> a >> b >> c >> d >> e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3);
    std::cout<<d<<endl;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(9);
    std::cout<<e<<endl;
    return 0;
}
