#include <iostream>
//Section 6
//Challenge code 

int main(){
	std::cout << "Hello welcome to Franks cleaning service" << std::endl;
	    
    int small_rooms{0};
    std::cout << "\n How many  small rooms would you liked cleaned today?" << std::endl;
    std::cin >> small_rooms;
    
    int large_rooms{0};
    std::cout << "\n How many  Large rooms would you liked cleaned today?" << std::endl;
    std::cin>>large_rooms;
    
    const double price_per_small_room{23.75};
    const double price_per_large_room{34.50};
    const double sales_tax {0.05};

    	std::cout << "\n[Cleaning Estimate]" << std::endl;
        std::cout<<"Number of small rooms: "<< small_rooms <<std::endl;
        std::cout<<"Number of large rooms: " << large_rooms<<std::endl; 
        std::cout << "Price per small room: $" <<price_per_small_room<<std::endl;
        std::cout << "Price per large room: $" <<price_per_large_room<<std::endl;

        std::cout<<"Cost : $" <<((price_per_small_room*small_rooms)+(price_per_large_room*large_rooms)) <<std::endl;
        std::cout<<"Tax: $" <<((price_per_small_room * small_rooms)+(price_per_large_room*large_rooms)) *sales_tax << std::endl;
        std::cout<<"********************"<<std::endl;
        std::cout <<"Total: $"<<((price_per_small_room*small_rooms)+(price_per_large_room*large_rooms))+(((price_per_small_room * small_rooms)+(price_per_large_room*large_rooms)) *sales_tax)<<std::endl;
        std::cout<<"\nThanks for choosing Franks!"<<std::endl;
        
    

	return 0;
}
