#include <iostream>
using namespace std;
float intfloat(float,int&);
 void swaping (int &x,int &y ) // return by reference
 {
       int z;
       z=x;
       x=y;
       y=z;
       cout<<x<<'\t'<<y<<endl;

 }
    int casr (float &q)
    {


        int b = static_cast <int>(q);
        q-=b;
        return b ;

    }
     struct Long  {int m,cm;};

void print (Long L)
{


      if(L.cm>100) {L.m+=1;L.cm-=100;}
    cout<<L.m<<'.'<<L.cm;

    }


int main()

{
    Long d ;d.cm=110;d.m=90;
    //  Distance(d);
      print(d);
    cout<<"\n________________________\n";
    float w=22.6;
    cout<<casr(w)<<"\n";
    cout<<w;
    cout<<"\n________________________\n";
    int x=99,y=88;
     swaping(x,y);
        cout<<'\n'<<x; // return by reference   ÇáÊÛíÑ ÈíÍÏË Úáí ßáÇ ÇáãÊÛíÑíä İí ÇáÏÇáÉ æÇáãííä Ò




     /*swaping function
     int a=5,b=8;
     cout<<a<<'\t'<<b;
     swap(a,b);
     cout<<'\t'<<a<<'\t'<<b;
     fun(a,b);
     cout<<'\t'<<a;

int rel,rel2,div;char ch;
cout<<"\n\n enter relation(2,3) number :\n";cin>>rel>>ch>>rel2;
//div=(rel2<10)?10:100;
int i;
for(i=10;i%rel<0;i*10)
{
 //div=i*10;
}
cout<<'\n'<<rel<<'\t'<<static_cast<double>(rel2)/i;

float a,c;int b;
cout<<"enter float number:\n ";cin>>a;
cout<<intfloat(a,b);
cout<<'\n'<<a<<'\t'<<c;
    return 0;

float intfloat(float x,int&y);
{
     float z;
     y=static_cast<int>(x);
     z=x-y;
     return z;
} */
 int a=10,b=90;
 cout<<"\n_____________________\n"<<a<<"\n"<<b<<"\n notice swap\n ";
 swap(a,b);
  cout<<a<<"\n"<<b;


}
