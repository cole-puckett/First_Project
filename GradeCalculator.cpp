#include <iostream>
#include <print>
#include <string>

int main (){

int displayaverage(double);

  
int grade{};
std::println("Enter a grade to add to your average: ");
std::cin >> grade;
  // repeatedly ask for another grade until the stop input 
double total{};
total = grade; 
int count{1};
  
while ( grade != "Stop" ) {
  std::string next_grade{};
  std::println("Enter next grade (or \"Stop\" to stop): ");
  std::cin >> next_grade{};
  ++count;

if ( next_grade == "Stop"){
displayaverage();
}
  
  total += next_grade;
  
}


return 0;
}

int displayaverage(double total){
  double average{};
  average = total / count;
  std::println("Your grade average is: {}", average);

  
}
