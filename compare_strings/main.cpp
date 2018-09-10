#include <iostream>
#include<conio.h>
using namespace std;
int counter=0;
int main()
{  char str [5] ; char st[5];
 for (int i=0;i<5;i++)
 {
   cin>>str[i]; // str[i]=getche();
 }
 for (int i=0;;i++)
 { cin>>st[i];
     //st[i]=getche();
 }/*
 for(int i=0;i<5;i++)
 {
     for(int j=0;j<5;j++)
     {
         if(str[i]==st[j])
        counter++;
    }
 }
 cout<<"\n  the two words has  "<<counter<<" common characters ";
 //cout<<"\n  the two words has  "<<5-counter<<"  diferent  characters ";*/
 // anthor solve
 for(int i=0;i<5;i++){
    if(st[i]!=str[i]) {counter++;}}
 cout<<'\n'<<counter;
  return 0;
}
