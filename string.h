#ifndef STRING_H
#define STRING_H

#include <cstdio>
#include <iostream>
#include <vector>

class string
{
public:
    string(const char* str);
    ~string();

    const char* data() const;
    const std::vector<const string> split() const;

    const char operator[](const unsigned int index) const;
    const string operator+(const string& str) const;
    friend std::ostream& operator<<(std::ostream& out, const string& str);

private:
    char* _data;
    size_t len;
};
#endif