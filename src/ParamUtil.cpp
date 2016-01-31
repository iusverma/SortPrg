/*
 * ParamUtil.cpp
 *
 *  Created on: 23 Jan 2016
 *      Author: ayush
 */

#include <iostream>

#include "ParamUtil.h"

using namespace std;

int ParamUtil::parameter_length = 0;

void ParamUtil::populate_paramerter_map(int _num_of_param, char *_param_list[])
{
	cout << "ParamUtil::populate_paramerter_map" << endl;
	parameter_length = _num_of_param-1; // 1st parameter is program name
	if(validate_input_parameters(_param_list) == true)
	{
		for(int i=1; i<_num_of_param;i+=2)
		{
			string input_key = process_input_choice(_param_list[i]);
			if(_param_list[i+1] != NULL)
			{
				cout << "[DEBUG] Key: " << input_key;
				cout << ", Value: " << _param_list[i+1] << endl;
				//TODO: All following code for using map throws error
				//symbol(s) not found for architecture x86_64
				//Hence need to find a work around for storing key, value pair.
				//input_parameter_map[input_key] = _param_list[i+1];
				//ParamUtil::input_parameter_map.insert(make_pair(input_key,_param_list[i+1]));
				//insert_in_map("test","test");
				InputProperty ip;
				ip.set_property(input_key,_param_list[i+1]);
			}
			else
			{
				cout << "[ERROR] No value find for option: " << input_key << endl;
			}
		}
	}
	else
	{
		cout << "[ERROR] Invalid Input!" << endl;
	}
}

bool ParamUtil::validate_input_parameters(char *_param_list[])
{
	cout << "ParamUtil::validate_input_parameters" << endl;
	cout << "[DEBUG] parameter_length: " << parameter_length << endl;
	if(parameter_length%2!=0)
	{
		return false;
	}
	return true;
}

string ParamUtil::process_input_choice(char* _choice)
{
	cout << "ParamUtil::process_input_choice" << endl;
	string key = "";
	if(_choice != NULL)
	{
		char begin = _choice[0];
		cout << "[DEBUG] First char is: " << begin << endl;
		if(begin == '-'){
			key = _choice;
			key.erase(0,1);
			cout << "[DEBUG] Input Choice: " << key << endl;
		}
		else
		{
			cout << "[ERROR] Invalid Choice! :" << _choice << endl;
		}
	}
	return key;
}

void ParamUtil::print_parameter_map()
{
	cout << "ParamUtil::print_parameter_map" << endl;
	/* Below code not working
	for(int i=0;i<5;i++)
	{
		cout << "[DEBUG] Key: " << input_parameter_arr[i].get_key();
		cout << ", Value: " << input_parameter_arr[i].get_value() << endl;
	}
	*/
	/* This does not work as well
	for(map<string,string>::iterator iter = input_parameter_map.begin();
			iter != input_parameter_map.end();++iter)
	{
		//cout << "Input Key: " << iter->first << ", Input Value: " << iter->second << endl;
	}
	*/
}
