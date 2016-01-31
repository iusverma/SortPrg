/*
 * InputProperty.h
 *
 *  Created on: 24 Jan 2016
 *      Author: ayush
 */

#ifndef INPUTPROPERTY_H_
#define INPUTPROPERTY_H_

#include <string>
using namespace std;

class InputProperty {
	string key;
	string value;
public:
	InputProperty(){};
	virtual ~InputProperty(){};

public:
	void set_property(string _key, string _value);
	string get_key();
	string get_value();
};

#endif /* INPUTPROPERTY_H_ */
