using System
using System.Threading
namespace LockDemo {
    class LockExample1 {
        public void Display() {
            lock(this) {
                for (int i =0; i <= 3; i++) {
                    Console.WriteLine($ "My Name is Abhisshek{i}");
                }
            }
        }
    }
    class Exemple2 {
        public static void Main(string[]args) {
            LockExample1 locker = new LockExample1();
            Console.WriteLine("Threading with the help of Lock");
            Thread t1 = new Thread(locker.Display);
            Thread t2 = new Thread(locker.Display);
            t1.Start();
            t2.Start();
            t1.Join();
            t2.Join();
        }
    }
}