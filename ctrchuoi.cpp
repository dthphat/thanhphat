#include <iostream>
using namespace std;

int main() {
   char string[] = "Hello, world!"; 

   char *ptr = string; 

   
   while (*ptr != '\0') {
      cout << *ptr;
      ptr++;
   }

   return 0;
}
