// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <windows.h>

#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::tr1::shared_ptr;
using std::tr1::weak_ptr;
using std::tr1::enable_shared_from_this;

enum states {OFF, ON};
enum weathers {GOOD, BAD};
enum days {WEEKEND, TRASH_DAY, WEEK_DAY};
