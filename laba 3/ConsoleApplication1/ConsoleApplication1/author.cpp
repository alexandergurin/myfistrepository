#include "stdafx.h"
#include "author.h" 
#include <iostream> 
using namespace std;  
author::author(void)
{
}
void  author::author_set()
 {
	  cout<<"������� ���"<<endl;
	 cin>>sex;
	  cout<<"������� �������"<<endl;
	 cin>>age;
 };
void author::author_get()
{  
	cout<<"�������: "<<this->age<<endl; 
	cout<<"���: "<<this->sex<<endl; 
}  
author::~ author(void)
{
	cout<<"###### ���������� ������ #######"<<endl;
};