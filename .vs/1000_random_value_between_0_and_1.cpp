//This code generates random value between 0 and 1
//in this code we are checking how many times out of 1000 times generated, the
//value is lying between 0.0 to 0.1, 0.1 to 0.2, 0.2 to 0.3, 0.3 to 0.4, 0.4 to 0.5,
//0.5 to 0.6, 0.6 to 0.7, 0.7 to 0.8, 0.8 to 0.9, 0.9 to 1.0
//displaying the number of times it

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{


    float v[1000];
    int a =0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0;

    for (int i = 0; i <1000; i++) //try it thousand times
    {
        v[i] = (rand() )/(RAND_MAX*1.0);
    }

    for (int i = 0; i <1000; i++)
    {
        if(v[i]>=0.0 & v[i]<0.1 )
        {
            a++;
        }
        else
        {
            if(v[i]>=0.1 & v[i]<0.2 )
            {
               b++;
            }
        }
        else
            {

            if(v[i]>=0.2 & v[i]<0.3 )
            {
                c++;
            }

            }
        else
        {
            if(v[i]>=0.3 & v[i]<0.4)
            {
            d++;
            }
        }
        else
        {
            if(v[i]>=0.4 & v[i]<0.5)
            {
                e++;
            }
        }

        else
        {
            if(v[i]>=0.5 & v[i]<0.6)
            {
                f++;
            }
        }

        else
        {
            if(v[i]>=0.6 & v[i]<0.7)
            {
                g++;
            }
        }

        else
        {
            if(v[i]>=0.7 & v[i]<0.8)
            {
                h++;
            }
        }

        else
        {
            if(v[i]>=0.8 & v[i]<0.9)
            {
                j++;
            }
        }

        else
        {
            if(v[i]>=0.9 & v[i]<1.0)
            {
                k++;
            }
        }
    }

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;
    cout<<h<<endl;
    cout<<j<<endl;
    cout<<k<<endl;

    return 0;

}
