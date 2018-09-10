#include <iostream>

using namespace std;

int main()
{
 int a=-2,b=8,c; // conditional operators
 c=(a>b)?2:0;cout<<c;
 c=(a==5)?5:1000; cout<<c;
 char C ;
 C=(a>=0)?'+':'-';
 cout<<C<<'\n';
 for (int i=0;i<=20;i++)
 {
     char p=(!(i%10)?'x':'p'); //! åÐÉ ÇáÚáÇãÉ äæÊ ÊÚßÓ ÇáÝáæÓ ÊÑæ æÇáÚßÓ
     cout<<'\n'<<p;
}

for(int i=0;i<20;i++)
    if((i%2==0)&&(i%3==0)||(i==19)) {
                    if(i==18) break;

            if(i==9) continue ;//  هتروح تزود لفة بس من اللووخطي ب اللي تحت كلما توافق الشرط
            cout<<endl<<i;
    }
    cout<<"\n you are out of loop"; // ده بسبب البريك  بتخليك تخرج من اللوب علطول
}
