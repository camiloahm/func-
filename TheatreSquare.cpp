#include <iostream>
#include"cmath"
#include"cstdio"
using namespace std;

main(){

	long long n,m,a;
    cin >> n >> m >> a;
    long long ans=ceil(n*1.0/a)*ceil(m*1.0/a); 
    cout << ans;
}