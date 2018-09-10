#include <iostream>
#include<conio.h>
using namespace std;
 int global ;
// recursion method
 double   pow (int a,int b)
 {  global =20;
 // function
       if (a==1)return 1 ;
 if(b==0) return 1;
 return a*pow(a,b-1);

 }
  double fact (int x)
  {  if (x==0)return 1;
      return x*fact(x-1);
  }


int main()
{
  cout<<pow(3,2);
cout<<fact(8);
global = 90; cout<<'\n'<<global<<'\n';
char ch ;
 while(ch!='\r')
{
  ch =getch();cout<<'*';// getchecharacter show in screen   // getch character don't show on screen

 }
 return 0 ;
}
