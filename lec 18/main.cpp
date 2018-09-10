#include<iostream>
#include<string>
using namespace std;

class medo{
    public:medo(){cout<<"welcome from constructor ";};
//    medo (int w){cout<<'\n'<<w<<endl;_int2=160;};
private: string str;
public:void get(){cout<<"enter string\t";cin>>str;} //secmiocolon is allowed to remove itor add it
public:void prin(){cout<<str<<endl;}
int _int=90;
//private:int _int2=312;
//protected:int _int3=444;
};
class dist{
private:int feet,inch;
char ch='\t';
public: dist(){feet=0;inch=0;};
dist (int feets,int inches){feet=feets;inch=inches;}
void print(){cout<<'\n'<<feet<<ch<<inch;}
void put(){cout<<"enter feet and inch\n";cin>>feet>>inch;}
dist operator + (dist d1)
{
    dist d2;
    dist sum;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

//dist _sum=(d1.feet+d2.feet,d1.inch+d2.inch);
return sum;
}
};
int main ()
{//medo q(120);
/*medo s1; //declare new object
s1.get();
s1.prin();
medo s2;//declare new object
s2.get();
s2.prin();
s1._int=40;
cout<<s1._int;
medo m1,m2;//declare two objects*/
dist d1,d3;
dist d2(20,8);
dist d4(10,2);
d1.put();
d3.put();
d2.print();
d3.print();
cout<<d2+d4;
//cout<<s2._int;
//cout<<s2._int3;
//cout<<s2._int2; is private
}


