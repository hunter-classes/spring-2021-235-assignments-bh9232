#include <iostream>

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

  for(int i = 0; i <= 3; i++){
    std::cout << i << " steps: " << stepPerms(i) << "\n";
  }

  std::cout << stepPerms(5) << "\n"; //should be 13
  std::cout << stepPerms(10) << "\n";

  return 0;
}