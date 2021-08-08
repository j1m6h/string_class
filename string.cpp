#include <string.h>

#include "string.h"

string::string(const char* str)
{
    len = strlen(str);
    _data = new char[len];
    strcpy(_data, str);
}

string::~string()
{
    delete[] _data;
}

const char* string::data() const 
{
    return _data;
}

const std::vector<const string> string::split() const
{
    
}

const char string::operator[](const unsigned int index) const 
{
    return _data[index];
}

const string string::operator+(const string& str) const 
{
    size_t len = strlen(_data) + strlen(str.data());
    char result[len];
    strcpy(result, _data);
    strcat(result, str.data());
    /* return a copy of the new result */
    return string(result);
}

std::ostream& operator<<(std::ostream& out, const string& str)
{
    return out << str.data();
}