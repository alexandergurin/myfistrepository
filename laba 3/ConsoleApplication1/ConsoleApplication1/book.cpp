#include "stdafx.h"
#include "book.h" 
#include <iostream> 
using namespace std;  
book::book(void)
{
	cout<<"�����"<<endl;
}
void  book::book_set()
 {
	 
	 cout<<"������� �����: "<<endl;
	 cin>>circulation;
	 cout<<"������� ��� ������� �����: "<<endl;
		cin>>year;
		cout<<"������� ��� �������: "<<endl;
		cin>>type;
		cout<<"������� ����"<<endl;
		cin>>genre;
 };
void book::book_set_name()
{
	cout<<"������� ��������: "<<endl;
		cin>>book_name;
};
void book::book_get_name()
{
	cout<<"��������: "<<this->book_name<<endl; 
}
void book::book_get()
{ 

	cout<<"�����: "<<this->circulation<<endl;
	cout<<"��� �������: "<<this->year<<endl; 
	cout<<"��� �������: "<<this->type<<endl; 
	cout<<"����: "<<this->genre<<endl; 
	
}  
book::~book(void)
{
	cout<<"###### ���������� ����� #######"<<endl;
};