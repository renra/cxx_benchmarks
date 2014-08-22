#include <iostream>
#include <vector>

// 100'000'000 seems a good benchmarking size
int main(int argc, char ** argv){
  if(argc < 2){
    std::cout << "Give me array size" << std::endl;
    return 1;
  }

  int size = std::stoi(argv[1]);
  int sum = 0;
  std::vector<int> * vec = new std::vector<int>(size);

  for(int i = 0; i < size; i++){
    sum += (*vec)[i];
  }

  delete vec;

  return 0;
}
