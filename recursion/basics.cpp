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

int main()
{
  // // fib sequence (recursion)
  // int i;
  // for (i=0; i < 10 ; i++){
  //   std::cout << fib(i) << ", ";
  // }
  // std::cout << "\n";

  // fib-iter (loop)
  std::cout << fib_iter(10) << "\n";

  return 0;
}