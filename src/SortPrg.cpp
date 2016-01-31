//============================================================================
// Name        : SortPrg.cpp
// Author      : Ayush Verma
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ParamUtil.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "!!!Main Program!!!" << endl; // prints !!!Main Program!!!

	ParamUtil::populate_paramerter_map(argc, argv);
	ParamUtil::print_parameter_map();

	return 0;
}
