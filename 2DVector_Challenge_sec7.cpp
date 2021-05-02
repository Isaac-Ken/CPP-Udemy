#include <iostream>
#include <vector>


int main(){
	//declare 2 empty vectors 
    
    std::vector <int> vector1;
    std::vector <int> vector2;
    // add 10 and 20 using push_back
    vector1.push_back(10);
    vector1.push_back(20);
    //print vector 1
    std::cout<<"\Vector1: "<<std::endl;
    std::cout<<vector1.at(0)<<std::endl;
    std::cout<<vector1.at(1)<<std::endl;
 
    // add 100 and 200using push_back
    vector2.push_back(100);
    vector2.push_back(200);
    //print vector 2
    std::cout<<"\nVector2"<<std::endl;
    std::cout<<vector2.at(0)<<std::endl;
    std::cout<<vector2.at(1)<<std::endl;
    
    //declare a 2d vector
    std::vector <std::vector <int>>vector_2d;
  
    //add vector 1 and 2 using push_back
    std::cout<<"\n2D vector"<<std::endl;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
   //print Vector2D
    std::cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<std::endl;
    std::cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<std::endl;
    
    //change vector 1.at(0)
    vector1.at(0)=3000;
   
    //print vector 1
    std::cout<<"\nUpdated Vector1: "<<std::endl;
    std::cout<<vector1.at(0)<<std::endl;
    std::cout<<vector1.at(1)<<std::endl;
    
    //print 2D vector
    std::cout<<"\nUpdated 2D Vector (notice it dosent updte)"<<std::endl;
    std::cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<std::endl;
    std::cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<std::endl;
    
    
   
    std::cout<<"Vector 1 contains : "<< vector1.size()<< " elements"<<std::endl;
    //[x].size() returns the number of vectors in "row" x
    std::cout<<"Vector 2D contains : "<< vector_2d.size() * vector_2d[0].size()<< " elements"<<std::endl;
    
    
    
    
    
	return 0;
}

    
    
    
    
    
