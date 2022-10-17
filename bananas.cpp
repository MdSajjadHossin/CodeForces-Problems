#include<iostream>
using namespace std;

int main()
{
    int k, n, w, i,  sum  = 0;

    cin>> k >> n >> w;

    for(i = 1; i<= w ; i++)
    {
        sum = sum + i;
    }

    int d = (sum*k) - n;

    if(d<0)
    {
        cout<< "0";
    }else{
        cout<<d;
    }

}