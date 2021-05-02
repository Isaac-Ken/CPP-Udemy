#include <iostream>

int main(){
    const double usd_p_eur{1.19};
    std::cout<<"EUR to USD Convertor"<<std::endl;
    std::cout<<"Enter a value in EUR: ";
    
    double euros{0.0};
    double dollars{0.0};
    
    std::cin>>euros;
    dollars=euros*usd_p_eur;
    std::cout<<euros<<" EUR is "<<dollars<<" USD"<<std::endl;
    
	return 0;
}
