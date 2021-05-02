#include <iostream>

int main(){
	bool equal_result{false};
    bool not_equal_result{false};
    
    double num1{},num2{};
    
    std::cout<<std::boolalpha; //true/false vs 1/0
    
    std::cout<<"Enter two integers seperadted by a space: ";
    std::cin>>num1>>num2;
    equal_result=(num1=num2);
    not_equal_result=(num1!=num2);

    std::cout<<"Comparision result (equals): "<<equal_result<<std::endl;
    std::cout<<"Comparision result (not equals): "<<not_equal_result<<std::endl;

}
