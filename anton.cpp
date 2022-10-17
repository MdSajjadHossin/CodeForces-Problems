#include<iostream>
using namespace std;

int main()
{
    int n; 
    char s;
    int aCount = 0, dCount = 0;

    cin>> n;
    for(int i = 1; i<=n; i++){
        cin>> s;
        // cout<<s<<endl;
        if( s == 'A'){
            aCount ++;
        }else{
            dCount ++;
        }
    }
    if(aCount  == dCount){
            cout<<"Friendship"<<endl;
        }else if(aCount > dCount){
            cout<<"Anton"<<endl;
        }else{
            cout<<"Danik"<<endl;
        }
    return 0;
    
}