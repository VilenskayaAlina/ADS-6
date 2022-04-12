// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[size];
  int first, last;

 public:
  TPQueue():first(0), last(0) {}

  void push(const T& value) {
    int i = last;
    if (last - first >= size) {
      throw "Full!";
    } else {
        int i = last - 1;
        while ((value.prior > arr[i % size].prior) && (i >= first)) {
          arr[(i + 1) % size] = arr[i % size];
          i--;
        }
     arr[(i + 1) % size] = value;
    }
  }
  T pop() {
    if (first == last)
      throw "Empty!";
    else
      return arr[(first++) % size];
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
