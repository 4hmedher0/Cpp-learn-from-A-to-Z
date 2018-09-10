#include <iostream>

using namespace std;

int main() //task from group of facebook
{int s;
cout<<"please enter numbers of sides of square : \n";cin>>s;
if(s>1&&s<20)
{
for(int i=0;i<s;i++)
{for(int j=0;j<s;j++)
    cout<<'*';
cout<<endl;}}
  else cout<<"invalid input   make sure input<20 ";
        return 0;
}
