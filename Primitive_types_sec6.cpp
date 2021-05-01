#include <iostream>
int main(){
    
    //Character type
    char middle_initial {'R'}; //must be single qoutes
    std::cout << "My middle initial is "<<middle_initial << std::endl;
    
   
    //integers

    unsigned short int exam_score {108};//or unsigned short exam_score{55}
    std::cout<<"My Exam score was " << exam_score<<std::endl;
    
    int countries_represented {65};
    std::cout << "There were " << countries_represented << " countries represented in my meetings" << std::endl;
    
    long people_in_florida{206100000};
    std::cout<< "The poulation in florida is " <<people_in_florida<<std::endl;

    long long people_on_earth{7'600'000'000};
    std::cout<<"Earth has a population of " << people_on_earth<<std::endl;
    
     long long long_number {9989393975939795};
    std::cout<<"Here is a really long number " << long_number<<std::endl;
    
    
    
    //floats
     float car_payment{537.65};
    std::cout<<"My car payment is " <<  car_payment<<std::endl;
    
     double pi {3.1459};
    std::cout<<"Pi is " << pi <<std::endl;
    
     long double  even_longer_number{2.7e120};//even adds addition sign not actualy long tho
    std::cout<<"How about an even bigger number " << even_longer_number<<std::endl;
    
    
    //boolean
    bool true_or_false{true};
    std::cout<<"  The value is: " << true_or_false <<std::endl;
    
    //overflow
    short value1 {30000};
    short value2 {30000};
    short  product {value1 * value2}; //use  long  to makes this work
    std::cout<< "the product of " <<value1 << " and "<<value2<< " is " <<  product <<std::endl;
    
    
    
    return 0;

}
