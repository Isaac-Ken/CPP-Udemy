#include <iostream>

int main(){
	
    
    int total{};
    int  num1{},num2{},num3{};
    const int count {3};
    
    std::cout<<"enter 3 integers seprated by spaces"<<std::endl;
    std::cin>>num1>>num2>>num3;
   
    total=num1+num2+num3;
    
    
    double average{0.0};
   
    average=static_cast<double>(total)/count;
        
    std::cout << "the sum of " << num1<<", "<< num2<<", "<<num3<<" is "<<total<< std::endl;

    std::cout << "the average of " << num1<<", "<<num2<<", "<<num3 <<" is "<< average<< std::endl;
	return 0;
}
