#include <iostream>
#include <thread>
using namespace std;

void func (int &n)  {  
    n += 1;  
    std::cout << "Number inside thread is " << n << std::endl;  
}  
  
int main()  {  
    int n = 15;  
    std::cout << "Before executing external thread, number is " << n << std::endl;  
    std::thread t1(func, std::ref(n));  
    t1.join();  
    std::cout << "After executing thread, number is " << n << std::endl;  
    return 0;  
} 