#include "stdafx.h"
#include "person.h" 
#include <iostream> 
using namespace std;  
person::person(void) 
{ 
	cout<<" #######����������� ������� #######"<<endl;
} 
void person::setname()
{cout<<"������� ��� ������"<<endl;
	 cin>>name;

}  
void person::getname()
{  
	cout<<"��� �������: "<<this->name<<endl; 
}  
person::~person(void) 
{ 
	cout<<"#######���������� �������#######"<<endl; 
}