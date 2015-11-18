#pragma once

#include "targetver.h"

#include <tchar.h>
#include <ctime>

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip> 
using std::setprecision;
using std::fixed;

#include <sstream>
using std::ostringstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <memory>
using std::tr1::shared_ptr;

enum emails { UNKNOWN, SPAM, FAN, COMPLAINT, NEW_LOC };

