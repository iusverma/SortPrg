/*
 * ParamUtil.h
 *
 *  Created on: 23 Jan 2016
 *      Author: ayush
 */

#ifndef PARAMUTIL_H_
#define PARAMUTIL_H_

#include <map>
using namespace std;

enum PARAM
{
	MERGE,
	BUBBLE,
	SELECTION,
	QUCIK
};

class ParamUtil {
public:
	static map<string,string> input_parameter_map;
	void static populate_paramerter_map(int _num_of_param, char *_param_list[]);
};

#endif /* PARAMUTIL_H_ */
