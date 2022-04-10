// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[size];
  int first, last;
  }

 public:
  TPQueue():first(0), last(0) {}

  void push(const T& value) {
    if (fast - first >= size)
      throw std::string("Full!");
    else
      arr[(last++) % size] = value;
    }
  T pop() {
    if (first == last)
      trow std::string("Empty!");
    else
      return arr[(first++) % size];
    }
  T front() const {
    if (first == last)
      trow std::string("Empty!");
    else
      return arr[first % size];
  }
  T back() const {
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
