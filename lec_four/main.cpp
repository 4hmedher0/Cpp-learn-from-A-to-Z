#include <iostream>
#include<cmath>//ÇÓÊÏÚÇÁ ÇáÏæÇá ÇáÌÇåÒÉ
#include<iomanip>
using namespace std;
int main()
{
    int a=3e9;cout<<a<<'\n';// ÇŞÕí ŞíãÉ ááÇäÊ  2 ãáíÇ Ñ áæ ÒæÏÊ åíÚØí ŞíãÉ ÚÔæÇÆíÉ
    unsigned int b=3e9;cout<<b;//ÒÇÏÇÊ ŞííãÉ ÇáãÊÛíÑ á 4 ãáíÇÑ æÊã ÍĞİ ÇáÔŞ ÇáÓÇáÈ æÇÖÇİÊå ÈÇÔÇÑÉ ãÎÇáİÉ ááÔŞ ÇáãæÌÈ İÇÕÈÍ 4 ãáíÇÑ
    /////áæ ŞíãÊ ÇáãÊÛíÑ ÒÇÏÊ Úä ÇáÍÏ ÇáÇŞÕí ÓíÚØí ŞíãÉ ÚÔæÇÆíÉ ãä ÇáĞÇßÑÉ
    int var =1.5e9;
    var=static_cast<double>(var)*10/10; // ÊÍæíá äæÚ ÇáãÊÛíÑ ÈÔßá ãÄŞÊ ÍÊí ÇÊãÇã ÇáÚãáíÉ ÇáÍÓÇÈíÉ
cout<<'\n'<<var;
cout<<sqrt(25)<<pow(5,2)<<cos(0);

cout<<'\n'<<setw(8)<<setfill('-')<<setiosflags(ios::left)<<"name"<<setw(10)<<"phone"<<endl;
cout<<setw(8)<<"ali"<<setw(10)<<"2011688"<<endl;
cout<<setw(8)<<"medo"<<setw(10)<<"2012998"<<endl;
cout<<setw(8)<<"mamdouh"<<setw(10)<<"2011491"<<endl;
//äÖÚ SETFILLáãáÁ ÇáİÑÇÛÇÊ æäÖÚsetiosflags(ios::left) áÚãá ãÍÇĞÇÉ äÇÍíÉ ÇáíÓÇÑ
}
