#include <iostream>

int main() {
   int n, bag = 0;
   std::cin >> n;

   while (n >= 0) {
      if (n % 5 == 0) {
         bag += (n / 5);
         std::cout << bag << std::endl;
         return 0;
      }
      else {
         n -= 3;
         bag++;
      }
   }
   std::cout << -1 << std::endl;
}
