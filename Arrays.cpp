#include <iostream>

int main(){
   

    char vowels[]{'a','e','i','o','u'};//always starts at 0
	std::cout << "The first vowel is:  " << vowels[0]<<std::endl;
    std::cout << "The last vowel is:  " << vowels[4]<<std::endl;
    
    
    
    double hi_temps[] {90.1,89.8,77.5,81.6};
    std::cout << "\nThe first high temperatur is  " << hi_temps[0]<<std::endl;
    hi_temps[0] =100.7;
    std::cout << "\nThe  high temperatur is now " << hi_temps[0]<<std::endl;
    
    
    double test_scores[5]{100,86.3,74.5,83.2};//currly braces intialize array to 0
        test_scores[2]=88.9;
    	std::cout<<"\nGrade Sheet"<<std::endl;
        std::cout<<"---------------"<<std::endl;
        std::cout << "The first score at index 0:  " << test_scores[0]<<std::endl;
        std::cout << "The second score at index 1:  " << test_scores[1]<<std::endl;
        std::cout << "The third score at index 2:  " << test_scores[2]<<std::endl;
        std::cout << "The fourth score at index 3:  " << test_scores[3]<<std::endl;
        std::cout << "The fifth score at index 4:  " << test_scores[4]<<std::endl;
        






    

	return 0;
}
