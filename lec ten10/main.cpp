#include <iostream>
using namespace std;
#include<process.h>
#include<conio.h>

int main()
{


 /*   int cc=0,wd=1;//  зоо мяФщ ФгАъАЦгй
    char ch='a';
    cout<<"enter phase \n";
    while((ch=getche())!='\r')//\r it means enter key
    {
        //ch=getche();//АгсйчхгА гАЦонАгй (гАмяФщ) ЦД гАЦсйноЦ ФйнрМДЕг
        if(ch==' ')
        {
            wd++;
        }
        else  cc++;
    }
    cout<<"\nnumber of characters:\n"<<cc<<"\nnumber of words:\n"<<wd;*/
    //the same above code but after update  نفس البرنامج ولكن باضافة تحديثات وتتحديدات
    // this above programme from lec 12 من المحااضرة  12 هذة الكود في الاعلي
     char ch='a';int cc=0,sym=0,wd=1;cout<<"enter phase : \n";
while ((ch=getche())!='\r')
{
    if (((ch>=65)&&(ch<=90))||(((ch>=97))&&(ch<=122)))
        cc++;
         else if (ch==' ')
            wd++;
        else sym++;
}
cout<<"number of letters is:\n"<<cc<<"\nnumber of words is :\n"<<wd<<"\nnumber of characters is :\n"<<cc+sym<<"\nsymbols are :\n"<<sym;

      int n;
 cout<<"\n\nenter number please : \n ";cin>>n;
 for(int i=2;i<=n/2;i++)
 {
     if (n%i==0) {cout<<" non-prime number "; return 0;}
 }
 cout<<"prime number";

 // swich case number of days of week зоо гМгЦ гАгсхФз











































    return 0;
}
