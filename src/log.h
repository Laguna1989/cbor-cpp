/*
   Copyright 2014-2015 Stanislav Ovsyannikov

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

	   Unless required by applicable law or agreed to in writing, software
	   distributed under the License is distributed on an "AS IS" BASIS,
	   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	   See the License for the specific language governing permissions and
	   limitations under the License.
*/
	   
#ifndef LOG_H_
#define LOG_H_

#include <stdio.h>

#if !defined(__PRETTY_FUNCTION__) && !defined(__GNUC__)
#define __PRETTY_FUNCTION__ __FUNCSIG__
#endif

#define logger(line) fprintf(stderr, "%s:%d [%s]: %s\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, line)
#define loggerf(format, ...) fprintf(stderr, "%s:%d [%s]: " format "\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, __VA_ARGS__)

#endif

