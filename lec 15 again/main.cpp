#include <iostream>
using namespace std;
float intflaot(float a,int&b);
void print();//over loading
void print(char);//different number of arguments
void print(char,int);//different kinds of agrguments
int main()
{ float x;int y;
    cout << "enter float :" << endl;
    cin>>x;
   cout<<'\n'<<intflaot(x,y);
   cout<<'\n'<<y<<endl;
   print('b',10);
   print('$');
   print();

    return 0;
}
float intflaot(float a,int&b)
{
    b=static_cast<int>(a);
    return a-b;
}
void print()
{
    for(int i=0;i<20;i++)
        cout<<"*";
}
void print(char ch)
{
    for(int i=0;i<20;i++)
        cout<<ch;
}
void print(char ch,int num)
{
    for(int i=0;i<num;i++)
        cout<<ch;
}
