/*** This is template**/


#include<iostream.h>
#define n 13
template <class T>
    T koboytuu (T *a,int n)
{T S=1;
    for (int i=0;i<n;i++)
    S*=1-a[i];
    return S;
}
template <class T>
    void Input (T *a,int i)
{for(int i=0;i<n;i++)
cin>>a[i];
}
main()
{ T w1=1,w2=1;
    int y[13];
    float x[20];
    Input(y,13);
    Input(x,20);
    T y1,y2;
    y1=koboytuu(y,13);
    y2=koboytuu(x,20);
    /*if(y1>0)
    {for(int i=0;i<13;i++)
        w1*=sin(y[i])+2;
            else
            w1*=1-y[i];}
            cout<<w1<<endl;
            if(y2>0)
            {for(int i=0;i<20;i++)
                w2=sin(x[i])+2;
                else
                    w2=1-x[i];}
                cout<<w2<<endl;*/}