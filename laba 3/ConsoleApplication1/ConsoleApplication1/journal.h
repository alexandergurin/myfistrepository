#pragma once 
#include "book.h"
class journal :
public book
{	int count;
public:
	journal(void);
	void set_jour();
	void get_jour();

};