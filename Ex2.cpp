#include <iostream>
#include <thread>

void func() {    
     for (int i=0; i < 5; i++) {    
          std::cout << "Concurrent execution of thread in C++" << std::endl;    
     }    
}    
    
int main() {    
    std::thread t1(func);    
    std::cout << "Main function thread executing..." << std::endl;    
    t1.join();    
    std::cout << "Main function exiting..." << std::endl;    
    return 0;    
}