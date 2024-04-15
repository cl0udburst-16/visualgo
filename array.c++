#include<iostream>


// Implementation of an integer array in C++

class Array{
private:
  int* array;
  int lenFilled;

public:
  Array(int size){
    int arr[size];
    array = arr;
    lenFilled = 0;
  }

  void insert(int i, int element){
    if(i>lenFilled){ return; }

    //TODO: Add
  }

  void show(){ //TODO: Implement
  }

};

int main(int argc, char const *argv[]) {

  Array array(4);

  array.insert(0, 4);
  array.insert(1, 9);
  array.insert(2, 99);

  array.show();

  return 0;
}
