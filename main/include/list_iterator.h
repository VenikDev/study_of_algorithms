//
// Created by sasha on 08.12.2022.
//

#ifndef STUDY_OF_ALGORITHMS_LIST_ITERATOR_H
#define STUDY_OF_ALGORITHMS_LIST_ITERATOR_H

#include "list_of.h"

namespace vs {

template<typename T>
class list_of;

template <typename T>
struct list_node {
  T data_;
  list_node* next_;
};

template <typename T>
class list_iterator {
  using Self = list_iterator<T>;
 public:
  /**
   * Операция разыменования
   * @return данные хранящиеся в узле
   */
  T& operator*() const { return ptr_->data_; }
  Self& operator++();
  Self operator++(int);
  bool operator==(const Self& rhs) const { return ptr_ == rhs.ptr_; }
  bool operator!=(const Self& rhs) const { return ptr_ != rhs.ptr_; }

 private:
  list_node<T>* ptr_ = nullptr;

  explicit list_iterator(list_node<T>* new_prt) : ptr_(new_prt) {}

  friend class vs::list_of<T>;
};

template <typename T>
list_iterator<T> list_iterator<T>::operator++(int) {
  auto it = *this;
  ++*this;
  return it;
}

template <typename T>
list_iterator<T>& list_iterator<T>::operator++() {
  ptr_ = ptr_->next;
  return *this;
}

}  // namespace vs

#endif  // STUDY_OF_ALGORITHMS_LIST_ITERATOR_H
