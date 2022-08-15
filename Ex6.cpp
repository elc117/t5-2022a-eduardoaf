#include <iostream>
#include <thread>

class Race_condition  
{  
public:  
   int n;  
   Race_condition() :n(0) {}  
   void increment() {  
       ++n;  
   }  
};

int main()  
{  
    Race_condition racer;  
    std::thread t1([&racer] {  
        for (int i = 0; i < 10000; ++i) {  
            racer.increment();  
            }  
        });  
    std::thread t2([&racer] {  
        for (int i = 0; i < 10000; ++i) {  
            racer.increment();  
            }  
       });  
    t1.join();  
    t2.join();  
      
    std::cout << racer.n << std::endl;  
    return 0;  
}