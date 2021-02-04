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

int main(){
  
  std::cout << fact(10) << "\n";
  std::cout << fib(10) << "\n";
  std::cout << fib_iter(10) << "\n";

  return 0;
}