#include <iostream>
#include <string.h>

using namespace std;


class Test{
    char paper[20];
    int marks;
    public:
      Test ()    // Function 1
      {
        strcpy (paper, "Computer");
        marks = 0;
      }
      Test (char p[])    // Function 2
      {
        strcpy(paper, p);
        marks = 0;
      }
      Test (int m)    // Function 3
      {
        strcpy(paper,"Computer");
        marks = m;
      }
      Test (char p[], int m)    // Function 4
      {
        strcpy (paper, p);
        marks = m;
      }
};

int main(){
  char pp[20];
  Test t;
  Test tt(pp);
  Test ttt(87);
  Test tttt(pp, 45);
  
}





//a. Write statements in C++ that would execute Function 1, Function 2, Function 3 and Function 4 of class Test.

//b. Which feature of Object Oriented Programming is demonstrated using Function 1, Function 2, Function 3 and Function 4 together in the above class Test?
// It is showing that the constructor is reloading again with each function