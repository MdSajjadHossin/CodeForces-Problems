#include<iostream>
using namespace std;

int main()
{
     int n;
    int result;
    cin>> n;

    result = n /100;
    int remain = n%100;

    result+= remain/20;
    remain = remain%20;

    result+= remain/10;
    remain = remain%10;

    result+= remain/5;
    remain = remain%5;

    result+= remain/1;

    cout<< result <<endl;

    return 0;
    
}