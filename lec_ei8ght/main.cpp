#include <iostream>

using namespace std;

int main()
{
  for (int i=0;i<6;i++) // lines
  {
      for(int j=6;j>i;j--) cout<<" "; //spaces
      for(int k=0;k<i*2+1;k+=2)cout<<"**";//stars
      for(int j=6;j>i+1;j--) cout<<" "; //spaces
      for(int k=0;k<i*2+1;k+=2)cout<<"**";//stars
      cout<<endl;

  }

  char ch ;
  int a,b;
  do{
  cout<<"\nenter the first number :\n";cin>>a;
    cout<<"enter the second number :\n";cin>>b;
    cout <<"the average of numbers is : "<<(a+b)/2;
    cout<<"\n Do again Y,N\n";cin>>ch;}while(ch=='y');

    return 0;
}
