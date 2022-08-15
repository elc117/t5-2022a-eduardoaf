#include <iostream>
#include <thread>
using namespace std;

void func() {  
}  
  
int main() {  
    std::thread t1(func);  
    std::thread t2(func);  
    std::cout << "Main Thread ID is " << std::this_thread::get_id() << std::endl;  
    std::cout << "First Thread ID is " << t1.get_id() << std::endl;  
    std::cout << "Second Thread ID is " << t2.get_id() << std::endl;  
    t1.join();  
    t2.join();  
    return 0;  
}