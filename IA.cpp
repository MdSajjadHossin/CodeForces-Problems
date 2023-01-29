#include<iostream>
using namespace std;

int main()
{
    long long m, n, k, x, z;
    cin>>m>>n>>k;
    if(m%k==0){
        x=m/k;
    }else{
        x=m/k+1;
    }

    if(n%k == 0){
        z= n/k;
    }else{
        z=n/k+1;
    }

    cout<<x*z<<endl;

    return 0;
}