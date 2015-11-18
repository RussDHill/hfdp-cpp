#pragma once

#include <time.h>

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <memory>
using std::tr1::shared_ptr;

#define DISABLE_COPY_AND_ASSIGN(Class) private: Class(const Class&); Class& operator=(const Class&);

