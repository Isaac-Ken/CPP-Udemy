#include <iostream>
//Section 6
//Global nad Local Variables

int age{1};//global

int main(){
    int age {0};//local//compiler runs local first 
	std::cout << age << std::endl;
	return 0;
