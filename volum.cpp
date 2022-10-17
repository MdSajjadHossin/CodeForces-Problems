#include <iostream>
using namespace std;

int main() {
	int t, i;
	
	for(i = 1; i<=t; i++)
	{
	    int x, y, r;
	    cin>> x >> y;
	    
	    if(x > y)
	    {
	        r = x - y;
	        
	        cout<< r << endl;
	    }else{
	        r = y - x;
	        cout<< r << endl;
	    }
	    
	}
	return 0;
}
