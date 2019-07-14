#include <iostream>
#include <cmath>

int main() {
  
double a;
double b;
double c; 

std::cout << "Please enter a number for a: \n";
std::cin >> a;
  
std::cout << " Now, please enter a number for b: \n";
  std::cin >> b;

std::cout << " Lastly, please enter a number for c: \n";
	std::cin >> c;
  
double root1; 
double root2;
  
root1 = (-b + std::sqrt(b * b - 4*a*c)) / (2*a); 
root2 = (-b - std::sqrt(b * b - 4*a*c)) / (2*a);  
std::cout << "The root1 is : " << root1 << " and the root2 is " << root2 << " \n";  
  
}