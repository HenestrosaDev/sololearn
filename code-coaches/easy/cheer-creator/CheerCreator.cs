using System;

class Program {
    static void Main(string[] args) {
        int yards = int.Parse(Console.ReadLine());

        if (yards > 10) {
            Console.WriteLine("High Five");
        } else if (yards < 1) {
            Console.WriteLine("shh");
        } else {
            for (int i = 0; i < yards; i++) {
                Console.WriteLine("Ra!");
            }
        }
    }
}