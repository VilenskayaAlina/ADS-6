// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[size] = {0};
  int first, last;
  }

 public:
  TPQueue():first(0), last(0) {}

  void push(T& value) {
    int i = last;
    if (fast - first >= size) {
      throw std::string("Full!");
    } else {
        int i = last;
        while ((value.prior > arr[i % size].prior) && (i-- >= first)) {
          arr[(i + 1) % size] = arr[i % size];
          i--;
        }
     arr[(i + 1) % size] = value;
    }
  }
  T pop() {
    if (first == last)
      trow std::string("Empty!");
    else
      return arr[(first++) % size];
    }
  T front() {
    if (first == last)
      trow std::string("Empty!");
    else
      return arr[first % size];
  }
  T back() {
    if (first == last)
      trow std::string("Empty!");
    else
      return arr[(last - 1) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
