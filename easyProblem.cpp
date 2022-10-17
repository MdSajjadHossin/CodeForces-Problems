#include<iostream>
using namespace std;

int main(){
    int n, k;
    int count  = 0;
    cin>> n;

    while(n --){
        cin >> k;

        if( k == 1){
            count += 1;
        }
    }

    if(count >= 1){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }

    return 0;
}