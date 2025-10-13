#include <iostream>
#include <string>
#include <iomanip>

int main (){
  
  void display_average(double, int);
  int validate_grade(double);
  void letter_grade(double);
  
double grade{};
std::cout << "Enter a grade to add to your average: ";
std::cin >> grade;
validate_grade(grade);
  // repeatedly ask for another grade until the stop input 
double total{};
total = grade; 
int count{1};
std::string user_input{};

double next_grade{};

while ( user_input != "Stop" && user_input != "stop") {
  std::cout << "Enter next grade (or \"Stop\" to stop): ";
  std::cin >> user_input;
  ++count;
  
  if ( user_input != "Stop" && user_input != "stop"){
    
    next_grade = std::stod(user_input); 
    
    validate_grade(next_grade);
    total += next_grade;
    
  }  
}

display_average(total, count);


return 0;
}
void letter_grade(double final_grade){

  if (final_grade >= 90){
    std::cout << "You got an A! Amazing work!\n";
  } else if (final_grade >=80){
    std::cout << "You got a B! Brilliant effort\n";
  } else if ( final_grade >= 70){
    std::cout << "You got a C! Creative stuff!\n";
  } else if ( final_grade >= 60){
    std::cout << "You got a D... You're still passing!!\n";
  } else {
    std::cout << "You got an F... there's always next time\n";
  }

  return;
}

void display_average(double total, int count){
 
  std::setprecision(2);
 std::fixed;
  double average{};
  average = total / count;
  std::cout << "Your grade average is: " << average << "\n" ;

  letter_grade(average);

  return;
}

int validate_grade(double grade){

if ( grade < 0 || grade > 100){
      if (grade < 0 ){
        std::cout << "Invalid input: Grade can not be negative\n";
        exit(1);
     } else {
        std::cout << "Invalid input: Grade can not exceed 100\n";
        exit(1);
     }
   }
   return grade;
}
