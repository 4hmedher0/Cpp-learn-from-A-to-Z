#include <iostream>
#include<conio.h>
using namespace std;
struct point{int x,y;};
struct dist{int m,cm;};
int main()
{
  //  point a,b;char ch;

    //cout<<"enter the first point\t";cin>>ch>>a.x>>ch>>a.y>>ch;
   // cout<<"enter the second point\t";cin>>ch>>b.x>>ch>>b.y>>ch;
   // cout<<"the results  is :("<<a.x+b.x<<','<<a.y+b.y<<")\n\a";
    // áæ ÇäÇ Çááí åÏÎá ÇáÞíãÉ íÈÞí ßÏÉ
    // point a={2,3};
    // point b={3,2};
    //cout<<"the results  is :("<<a.x+b.x<<','<<a.y+b.y<<")\n\a";
   dist d1={2,160};dist d2={2,120};dist d3;
   d3.m=d1.m+d2.m;d3.cm=d1.cm+d2.cm;
 for(int i=100;i<=d3.cm;)
  //if(d3.cm>=100)
   {
         d3.m++;
         d3.cm-=100;
}
cout<<d3.m<<'\t'<<d3.cm;
}
