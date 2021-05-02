#include <iostream>

int main(){
    int num1 {10};
    int num2{20};
    num1=100;
    num2=num1={9000};
    std::cout<<"num 1 is "<< num1<<std::endl;
    std::cout<<"num 2 is "<< num2<<std::endl;
    
    
	return 0;
}
