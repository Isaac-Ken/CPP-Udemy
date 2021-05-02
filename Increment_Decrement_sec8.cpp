#include <iostream>

int main(){

    int counter{10};
    int result{0};
    
    counter=counter+1;
    std::cout<<"Counter: " << counter<<std::endl;
    counter++;
    std::cout<<"Counter: " << counter<<std::endl;
    counter=++counter;
    std::cout<<"Counter: " << counter<<std::endl;
    ++counter;
    std::cout<<"Counter: " << counter<<std::endl;
    
    result=counter+1;
    std::cout<<"Result: " << result <<std::endl;
    result =counter++;
    std::cout<<"Result: " << result<<std::endl;
    result=++counter;
    std::cout<<"Result: " << result<<std::endl;
    result=++counter;
    std::cout<<"Result: " << result<<std::endl;
    
    
     result=++counter+1;
    std::cout<<"Counter: " << counter<<std::endl;
    
      std::cout<<"Result: " << result<<std::endl;
     //////////////////////////////////////////// 
     std::cout<<"****************\nPost increment"<<std::endl;
     
    counter=10;
    result=0;
    result=counter++ +10;//counter+10 is done first then stored into result... ++ changes counter value after stored
    std::cout<<"Counter: " << counter<<std::endl;
    
    std::cout<<"Result: " << result<<std::endl;
     
 std::cout<<"\nPre increment"<<std::endl;
    counter=10;
    result=0;
    result=++counter +10;//more logical way is to put ++ first 
    std::cout<<"Counter: " << counter<<std::endl;
    std::cout<<"Result: " << result<<std::endl;



    return 0;
}
