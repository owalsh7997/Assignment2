#include <iostream>

using namespace std;

int main(){
  int intArray[10];
  int userInput = 0;
  for (int i = 0; i < 10; ++i){
    cin >> userInput;
    if (userInput < 0){
      userInput = intArray[i];
    }
  }

}
