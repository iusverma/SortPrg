/*
 * ParamUtil.h
 *
 *  Created on: 23 Jan 2016
 *      Author: ayush
 */

#ifndef PARAMUTIL_H_
#define PARAMUTIL_H_

#include <map>
#include <string>

#include "InputProperty.h"

using namespace std;

enum PARAM
{
	MERGE,
	BUBBLE,
	SELECTION,
	QUCIK
};

class ParamUtil {
	static int parameter_length;

public:
	static map<string,string> input_parameter_map;
	static InputProperty input_parameter_arr[5];
	void static populate_paramerter_map(int _num_of_param, char *_param_list[]);
	void static print_parameter_map();
	void static insert_in_map(string key, string value)
	{
		input_parameter_map[key] = value;
	}
private:
	bool static validate_input_parameters(char *_param_list[]);
	string static process_input_choice(char* _choice);
};

#endif /* PARAMUTIL_H_ */
