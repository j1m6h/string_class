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
    /* in case _data was deleted some place else */
    if (_data != nullptr)
    {
        delete[] _data;
    }
}

const char* string::data() const 
{
    return _data;
}

const size_t string::length() const 
{
    return len;
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

const string& string::operator=(const string& str)
{
    size_t new_len = str.length();
    char* temp = new char[new_len];
    strcpy(temp, str.data());
    len = new_len;
    delete[] _data;
    _data = temp;
    return str;
}

std::ostream& operator<<(std::ostream& out, const string& str)
{
    return out << str.data();
}