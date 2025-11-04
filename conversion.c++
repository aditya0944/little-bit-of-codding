#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "45";
  string str2 = "3.14159";
  char str3[] = "31337 geek";

  // Store the integer value which
  // by stoi()
  int myint1 = stoi(str1);
  int myint2 = stoi(str2);
  int myint3 = stoi(str3);
  int val=myint1+myint2;
  string value=to_string(val);
  cout<<value;
  cout<<str1;
  

//   cout << "stoi(\"" << str1 << 
//           "\") is " << myint1 << '\n';
//     cout << "stoi(\"" << str2 << 
//             "\") is " << myint2 << '\n';

//     cout << "stoi(\"" << str3 << 
//             "\") is " << myint3;
//     return 0;
}