#include "stdafx.h"
#include "publhouse.h" 
#include <iostream> 
using namespace std;
void  pub_house::setpub()
 {
	 cout<<"������� �������� ������������"<<endl;
	 cin>>pubname;
	  cout<<"������� ����� ������������"<<endl;
	  cin>>address;
 };
void pub_house::getpub()
{  
	cout<<"�������� ������������: "<<this->pubname<<endl;
	cout<<"����� ������������: "<<this->address<<endl;
}  
pub_house::~ pub_house(void)
{
cout<<" #######���������� ������������ #######"<<endl;
};