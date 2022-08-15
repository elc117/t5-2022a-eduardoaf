#include <iostream>
#include <thread>

void func() {  
     std::cout << "Concurrent execution in C++" << std::endl;  
} 
int main() {  
    std::thread t1(func);  
    t1.join();  
    return 0;  
} 