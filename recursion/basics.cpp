#include <iostream>


int fact(int n){
  if (n == 0){
    return 1;
  } else {
    return n * fact(n-1);
  }
}

int fib(int n){

  if (n < 2){
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int fib_iter(int n){
  int next = 1;
  int prev = 0;
  int sum = 0;

  if(n < 2){

    return 1;
  
  }else{

    for(int i = 1; i < n; i++){
      sum = prev + next;
      prev = next;
      next = sum;
    }

    return sum;
  }
}

int stepPerms(int n){

  if(n == 0){
    return 1;
  }
  if(n == 1){
    return 1;
  }
  if(n == 2){
    return 2;
  }
  if(n == 3){
    return 4;
  }
  
  return stepPerms(n-1) + stepPerms(n-2) + stepPerms(n-3) % 10000000007;
}

int main(){
  
  std::cout << fact(10) << "\n";
  std::cout << fib(10) << "\n";
  std::cout << fib_iter(10) << "\n";


  //spacing
  std::cout << "\n";

  // hackerranks problems
  for(int i = 0; i <= 3; i++){
    std::cout << i << " steps: " << stepPerms(i) << "\n";
  }

  std::cout << stepPerms(5) << "\n"; //should be 13
  std::cout << stepPerms(10) << "\n";

  return 0;
}