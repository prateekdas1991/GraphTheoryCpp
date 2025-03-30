/*
 * ToRun.cpp
 *
 *  Created on: 15-Mar-2025
 *      Author: Personal
 */

#include "ToRun.h"
#include <iostream>

using namespace std;
using namespace idp;

namespace idp {

ToRun::ToRun() {
	// TODO Auto-generated constructor stub

}

ToRun::~ToRun() {
	// TODO Auto-generated destructor stub
}

void ToRun::runGraph(){
	cout << "Running Graph" << endl;
}

} /* namespace idp */

int main()
{
	cout << "Hello" << endl;
	ToRun t;
	t.runGraph();
	return 0;
}
