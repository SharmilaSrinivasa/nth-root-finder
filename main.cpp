#include <iostream>
#include "nth_root_finder.h"

int main() {
  int number,nth_root,precision;
  std::string res;
  std::cout<<"Enter A Number : ";
  std::cin>>number;
  std::cout<<"Enter Nth Root Value : ";
  std::cin>>nth_root;
  std::cout<<"Enter precision : ";
  std::cin>>precision;
  res=FindNthRoot(number,nth_root,precision);
  if(res== "no")
    std::cout<<"\n"<<number<<" Does Not Have Perfect Root";
  else
    std::cout<<"\nThe Root "<<nth_root<<" Of "<<number<<" Is : "<<FindNthRoot(number,nth_root,precision);
  return 0;
 
}
