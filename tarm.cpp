#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>> n;
    int enter, exits, inside(0), max(0);

    for(int i = 1; i <= n; i++){
        cin>> exits >> enter;

        inside = inside + enter;
        inside = inside - exits;
        

        if(inside > max){
            max = inside;
        }
    }
    cout<<max;

    return 0;
}