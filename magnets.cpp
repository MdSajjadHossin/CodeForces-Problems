#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, count = 0; 
    int a[100000];

    cin>> n;

    for(int i = 0; i<n; i++){
        cin>> a[i];
    }

    for(int i = 0; i<n; i++){
        if(a[i] != a[i + 1]){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;

}