#include <cstring>

#include <LCD.h>

using org::se::lab::LCD;

LCD::LCD(size_t cols, size_t rows) : cols_{cols}, rows_{rows}
{	
	buffer_ = new char[cols_*rows_]; 
	index_ = 0;
}

LCD::~LCD()
{
	delete[] buffer_; 
} 
				
void LCD::clear(void)
{
	index_ = 0;
	for(unsigned int i = 0; i < rows_*cols_; i++)
		buffer_[i] = '\0';		
}

void LCD::print(char c)
{
	buffer_[index_++] = c;
}

void LCD::print(const char* c_ptr)
{
	strcpy(buffer_ + index_, c_ptr);
	index_ += sizeof(c_ptr);
}
