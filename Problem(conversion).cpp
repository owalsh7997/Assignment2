#include <iostream>

using namespace std;

void userOutput(float meters, float centimeters){
  cout << meters << " Meters and " << centimeters << " Centimeters" << endl;

}

float calculation(float feet, float inches){
  float meters = 0.3048 * feet;
  float inchesInMeters = (inches / 12) * 0.3048;
  float centimeters = inchesInMeters;

  userOutput(meters, centimeters);
}

void userInput(){
  float feet;
  float inches;
  cout << "What are the feet?: ";
  cin >> feet;

  cout << "What are the inches?: ";
  cin >> inches;

  calculation(feet, inches);
}

int main(int argc, char** argv){
  bool check = true;
  userInput();

  while (check){
    string input;
    cout << "Type exit to stop" << endl;
    cin >> input;
    if (input == "exit"){
      check = false;
    }
    else{
      userInput();
    }
  }


}
