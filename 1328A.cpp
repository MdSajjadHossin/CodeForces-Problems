#include<iostream>
using namespace std;


int main()
{
    int t, x, y;
    cin>> t;

    while(t --){
        cin>> x >> y;

        if(x%y == 0){
            cout<< 0 <<endl;
        }else{
            int result = x % y;
            cout<< y - result<<endl;
        }
    }

    return 0;
}