#include <iostream>
using namespace std;
int main() {
 
  //syntax while
  int x = 0;
          while (x <= 3) {
          cout << x << endl;
           x++;
  }
     // syntax do while
     int y = 0;
     do {
          cout << y << endl;
          y++;     
          }
          while (y < 5);
     
     //   next syntax for loops
          for (int z = 0; z < 10 ; z++){
               cout << z << endl;
          }
          //another for loop
          for (int a=0; a <= 15; a = a + 2){
               cout << a << endl;
          }


  return 0;
}