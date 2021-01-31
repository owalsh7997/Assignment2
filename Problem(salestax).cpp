#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  float taxDec = taxRate/100;
  float finalValue = (taxDec * cost) + cost;
  return finalValue;
}
