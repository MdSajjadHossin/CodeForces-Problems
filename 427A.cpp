#include<iostream>
using namespace std;

int main()
{
    int n, police = 0, crime = 0; 
    cin>> n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>> x;

        if(x>0){
            police+=x;
        }else{
            if(police<1){
                crime++;
            }else{
                police--;
            }
        }
    }
    cout<<crime<<endl;
    return 0;
}
