#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, t;
    string s;

    cin>> n >> t;
    cin>> s;

    while(t --){
        for(int i = 0; i<s.length(); i++){
        
        if(s[i] == 'B' && s[i+1] == 'G'){
            s[i] = 'G';
            s[i + 1] = 'B';
            i++;
        }
    }
    }
    cout<< s << endl;
    return 0;

}