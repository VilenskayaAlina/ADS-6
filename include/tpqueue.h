// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
 private:
  T arr[50];
  int first, last;

 public:
  TPQueue():first(0), last(0) {}

  void push(T value) {
    if (last - first >= size) {
      throw "Full!";
    } else {
        int i = first;
        while (i < last) {
          if (value.prior > arr[i % size].prior) {
            for (int n = last-1; n >= i; n--) {
              arr[(n + 1) % size] = arr[n % size];
            }
            arr[i % size] = value;
            last++;
            continue;
          }
          i++;
        }
     arr[last++ % size] = value;
    }
  }
  T& pop() {
      return arr[(first++) % size];
    }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
