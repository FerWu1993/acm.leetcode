#include <iostream>
#include "problem.h"


int main(int argc, char *argv[])
{
	Solution st;
	vector<int> num;
	num.push_back(3);
	num.push_back(5);
	num.push_back(2);
	num.push_back(4);
	num.push_back(5);
	num.push_back(2);
	int result = st.maxArea(num);
	std::cout << result<<std::endl;
	return 0;
}