#include "stdafx.h"
#include "edition.h" 
#include <iostream> 
using namespace std;  
edition::edition(void)
{
cout<<"����� ������������ ��������� �������"<<endl;
}
void  edition::set_edition()
 {
	 cout<<"������� �������� ��������� �������"<<endl;
	 cin>>edition_name;
 };
void edition::get_edition()
{  
	cout<<"�������� ��������� �������: "<<this->edition_name<<endl; 
}  
edition::~ edition(void)
{
	cout<<"###### ���������� ��������� ������� #######"<<endl;
};