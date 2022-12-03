#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    int temp = 0;
    cin>> s;

    for(int i = 0; i<s.size(); i++)
    {
        int count = 0;
        if(s[i] == '0'){
            while(s[i] == '0' && i<s.size()){
                count++;
                i++;
            }
        }
        else{
            while(s[i] == '1' && i<s.size()){
                count++;
                i++;
            }
        }
        if(count >= 7){
            temp = 1;
        }
        i--;
    }
    if(temp == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}