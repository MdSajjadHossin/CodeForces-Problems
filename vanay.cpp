#include<iostream>
using namespace std;

int main(){
    int n, h, a;
    int count = 0;
    cin>> n >> h;

    for(int i = 1; i <= n; i++){
        cin>> a;
        
        if(a <= h){
            count += 1;
        }else{
            count +=2;
        }
    }
    cout<< count<<endl;
    
}