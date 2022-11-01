#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    int maxCount=0, minCount=101, maxi, mini;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] > maxCount){
            maxCount = arr[i];
            maxi = i;
        }

        if(arr[i] <= minCount){
            minCount = arr[i];
            mini = i;
        }
    }
    if(maxi > mini){
        mini++;
    }
    int r = maxi + (n-1) - mini;
    cout<<r<<endl;
}