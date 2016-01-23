/*
 * ParamUtil.cpp
 *
 *  Created on: 23 Jan 2016
 *      Author: ayush
 */

#include <iostream>
#include "ParamUtil.h"

using namespace std;

void ParamUtil::populate_paramerter_map(int _num_of_param, char *_param_list[])
{
	cout << "ParamUtil::populate_paramerter_map" << endl;
	for(int i=1; i<_num_of_param;i++)
	{
		cout << _param_list[i] << endl;
	}
}
