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