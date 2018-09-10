#include<iostream>
using namespace std;
struct dim {float m;float cm;};
void area(dim,dim);
int main()
{  dim wid,len;char ch;
    cout<<"enter length [m,cm]:\n"; cin>>len.m>>ch>>len.cm;   cout<<"enter width:\n";cin>>wid.m>>ch>>wid.cm;
 area(wid,len);
}
void area(dim d1,dim d2)
{  dim d3;
    d3.m=d1.m+d2.m;
    d3.cm=d1.cm+d2.cm;int i=100;
    while(d3.cm>=i)
    {
        d3.m++;
        d3.cm-=100;
    }
   // return d3;
   cout<<"the area sum :is "<<d3.m<<","<<d3.cm;
}

