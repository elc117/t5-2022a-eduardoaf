#include <iostream>
#include <thread>

int main() {    
    std::thread t1([]{  
        std::cout<<"Thread executing from lambda expressionâ€¦. "<<std::endl;  
    });  
  
    t1.join();    
    return 0;    
}