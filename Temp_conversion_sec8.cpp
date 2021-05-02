#include <iostream>

int main(){
    const double f_to_c{32};
    std::cout<<"fahrenheit converter "<<std::endl;
    std::cout<<"Enter a temperature in fahrenheit: ";
    
    double fahr {0.0};
    double cel{0.0};

    std::cin>>fahr;
    
    cel=fahr-f_to_c;
    std::cout<<fahr <<" degrees fahrenheit is  "<< cel<<" degrees celsius";
     
    double kel{0.0};
    kel=(fahr-32)*5/9+273.15;
    std::cout <<" and "<< kel <<" degrees kelvin"<<std::endl;

    
	return 0;
    
}
