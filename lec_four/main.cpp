#include <iostream>
#include<cmath>//������� ������ �������
#include<iomanip>
using namespace std;
int main()
{
    int a=3e9;cout<<a<<'\n';// ���� ���� �����  2 ���� � �� ���� ����� ���� �������
    unsigned int b=3e9;cout<<b;//����� ����� ������� � 4 ����� ��� ��� ���� ������ ������� ������ ������ ���� ������ ����� 4 �����
    /////�� ���� ������� ���� �� ���� ������ ����� ���� ������� �� �������
    int var =1.5e9;
    var=static_cast<double>(var)*10/10; // ����� ��� ������� ���� ���� ��� ����� ������� ��������
cout<<'\n'<<var;
cout<<sqrt(25)<<pow(5,2)<<cos(0);

cout<<'\n'<<setw(8)<<setfill('-')<<setiosflags(ios::left)<<"name"<<setw(10)<<"phone"<<endl;
cout<<setw(8)<<"ali"<<setw(10)<<"2011688"<<endl;
cout<<setw(8)<<"medo"<<setw(10)<<"2012998"<<endl;
cout<<setw(8)<<"mamdouh"<<setw(10)<<"2011491"<<endl;
//��� SETFILL���� �������� ����setiosflags(ios::left) ���� ������ ����� ������
}
