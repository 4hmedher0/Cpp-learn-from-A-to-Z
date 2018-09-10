#include <iostream>

using namespace std;
 int counter=0;
 void func()
 {cout<<"\n ----"<<++counter<<"-----";
 }
 int& func1 (int x);

int main()
{ // programe to count how many functions called using global variable

/*func();
func();
func();
func();
func();*/
for(int i=1;i<=10;i++)
{
    func ();
}

cout<<"\n the function  has been called\t"<<counter<<" times'\n'";
for(int i=1;i<5;i++)
{
    static int y=0; // ØÇáãÇ åæ ÓÊÇÊß ÇáÓØÑ ÏÉ ÈíÊÚÑÝ ãÑÉ æÇÍÏ ÝÞØ æãÔ ßá ãÑÉ  íÑÌÚ íÚÑÝå ÈÕÝÑ áÇ ÈíÊÚÑÝ ãÑÉ æÇÍÏÉ ÝÞØ æíßãá ÚáíåÇ
      y++;
      cout<<'\n'<<y;
}

    return 0;
}
