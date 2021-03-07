#include <iostream>
#include <vector>


std::vector<int> merge(std::vector<int> left, std::vector<int> right){

}

std::vector<int> msort(std::vector<int> arr){
  if(arr.size() < 2){
    return arr;
  }
  std::vector<int> left;
  std::vector<int> right;
  int mid = (arr.size()+1)/2;

  if(arr.size() > 1){
    // filling left half
    for(int i = 0; i < (arr.size()+1)/2; i++){
      left.push_back(arr[i]);
    }

    // filling right half
    for(int i = (arr.size()+1)/2; i < arr.size(); i++){
      right.push_back(arr.[i]);
    }

    left = msort(left);
    right = msort(right);
  }
}

int main(){
  std::vector<int> arr = {0,2,7,5,6,9,4,3,1,10};
  return 0;
}