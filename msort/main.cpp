#include <iostream>
#include <vector>


void print(std::vector<int> arr){
  for(auto i : arr){
    std::cout << i << " ";  
  }
  std::cout << "\n";
}

// Brian Hong
std::vector<int> merge(std::vector<int> left, std::vector<int> right){
  std::vector<int> fin;

  while(left.size() > 0 && right.size() > 0){
    if(left[0] < right[0]){
      fin.push_back(left[0]);
      left.erase(left.begin());
    }else{
      fin.push_back(right[0]);
      right.erase(right.begin());
    }
  }

  if(left.size() > 0){
    while(left.size() > 0){
      fin.push_back(left[0]);
      left.erase(left.begin());
    }
  }else{
    while(right.size() > 0){
      fin.push_back(right[0]);
      right.erase(right.begin());
    }
  }

  return fin;
}

// Brian Hong
std::vector<int> msort(std::vector<int> arr){
  if(arr.size() < 2){
    return arr;
  }

  std::vector<int> left;
  std::vector<int> right;
  int mid = arr.size()/2;

  // filling left half
  for(int i = 0; i < mid; i++){
    left.push_back(arr[i]);
  }

  // filling right half
  for(int j = mid; j < arr.size(); j++){
    right.push_back(arr[j]);
  }

  arr = merge(msort(left), msort(right));
  return arr;
}

int main(){
  std::vector<int> arr = {0,2,7,5,6,9,8,4,3,1,10};
  print(arr);

  std::vector<int> sorted = msort(arr);
  print(sorted);

  return 0;
}