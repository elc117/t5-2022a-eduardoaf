using System;  
using System.Threading;  
class Program {  
    public static void Main() {  
        Thread ThreadObject1 = new Thread(Example1); //Creating  
        Thread ThreadObject2 = new Thread(Example2); //the Thread    
        ThreadObject1.Start(); //Starting the Thread    
        ThreadObject2.Start();
        ThreadObject1.Join();
        ThreadObject2.Join();
    }  
    static void Example1() {  
        Console.WriteLine("Thread1 Started");  
        for (int i = 0; i <= 2; i++) {  
            Console.WriteLine("Thread1 Executing");  
            Thread.Sleep(100); //Sleep is used to pause a  
        }                      //thread and 100 is MilliSeconds
    }  
    static void Example2() {  
        Console.WriteLine("Thread2 Started");  
        for (int i = 0; i <= 2; i++) {  
            Console.WriteLine("Thread2 Executing");  
            Thread.Sleep(100);  
        }  
    }  
}

