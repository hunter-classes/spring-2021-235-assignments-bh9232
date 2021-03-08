#include <iostream>
#include <vector>


void print(std::vector<int> arr){
  for(auto i : arr){
    std::cout << i << " ";  
  }
  std::cout << "\n";
}


//Sarah Sookoo

std::vector<int> merge(std::vector<int> one, std::vector<int> two){
  std::vector<int> result;
  while (one.size() > 0 || two.size() > 0) {

    if (one.size() > 0 && two.size() > 0) {
      if (one[0] <= two[0]) {
  result.push_back(one[0]);
  one.erase(one.begin());
      }
      else {
  result.push_back(two[0]);
  two.erase(two.begin());
      }
    }  
    else if (one.size() > 0) {
      for (int i = 0; i < one.size(); i++)
  result.push_back(one[i]);
      break;
    }  
    else if (two.size() > 0) {
      for (int i = 0; i < two.size(); i++)
  result.push_back(two[i]);
      break;
    }
  }
  return result;
}

//Tommy Liang
//CSCI 23500
std::vector<int> msort(std::vector<int> a)
{
    if(a.size() < 2)
        return a;
    std::vector<int> fhalf;
    std::vector<int> shalf;
    int mid = (a.size()+1)/2;
    //separate array into two pieces
    if(a.size() > 1)
    {      
        for(int i = 0; i < (a.size()+1)/2; i++)
            fhalf.push_back(a[i]);
        for(int i = (a.size()+1)/2; i < a.size(); i++)
            shalf.push_back(a[i]);
        //need to sort the two arrays
        fhalf = msort(fhalf);
        shalf = msort(shalf);
        return merge(fhalf, shalf);
    }
    else
        return a;
}


int main(){
  std::vector<int> arr = {0,2,7,5,6,9,8,4,3,1,10};
  print(arr);

  std::vector<int> sorted = msort(arr);
  print(sorted);

  return 0;
}