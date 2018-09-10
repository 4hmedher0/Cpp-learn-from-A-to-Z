#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    for(int i=0;i<7;i++)
    {
        for(int j=7;j>i;j--)cout<<" ";
            for(int k=0;k<i;k++)cout<<setw(2)<<"* ";
        cout<<"\n";
    }



    return 0;
}
