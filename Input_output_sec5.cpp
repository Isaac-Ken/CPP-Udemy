#include <iostream>
//Secion 5 Input out put

int main(){
	std::cout << "Hello World" << std::endl;
	
    std::cout<< "Hello";
    std::cout<<"World";
    
    std::cout<<"Hello"<<"world"<<std::endl;
    std::cout<<"Hello"<<"world\n";
    std::cout<<"Hello\nOut\nThere\n";
    
    
    int num1;
    int num2;
    double num3;
    
    std::cout<< "Enter an integer ";
    std::cin >> num1;
    std::cout<<"you Entered " << num1 << std::endl;
     
    std::cout<< "Enter another integer ";
    std::cin >> num2;
    
    std::cout<<"You entered " << num1 <<" and "<<num2 << std::endl;

    std::cout<< "Enter a double ";
    std::cin >> num3;
    
    std::cout<<"You entered " << num1 <<", "<<num2<<  " and " <<num3<< std::endl;

    
    
    
    return 0;
}
