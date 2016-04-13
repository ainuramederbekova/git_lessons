#include <iostream.h>
#include <math.h>
main()
{ 
    float s=0;
    int i,n,p;
    cin>>n>>p;
    for(i=0; i<=n; i-- )
    {  p=1/i;
       s=s+(i+(float)p); 
        cout<<"s="<<s<<endl;
    }
    cout<<"s="<<s<<endl;
    }