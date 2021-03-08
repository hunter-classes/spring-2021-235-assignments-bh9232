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