//
// Created by sasha on 08.12.2022.
//

#ifndef STUDY_OF_ALGORITHMS_LIST_OF_H
#define STUDY_OF_ALGORITHMS_LIST_OF_H

#include <cstddef>

#include "list_iterator.h"
#include "types.h"

namespace vs {

// forward declaration
template<typename T>
class list_iterator;

template<typename T>
class list_node;

/**
 * Однонаправленынй список
 * @tparam T - тип элементов списка
 */
template <typename T>
class list_of {
 public:
  using iterator = list_iterator<T>;
  using type_node = list_node<T>;
  iterator Begin() { return iterator{head_}; }
  iterator End() { return iterator{nullptr}; }

  std::size_t Size() const { return size_; }

  void push_back(T input);
  T& At(std::size_t index);

  ~list_of();

 private:
  type_node* head_ = nullptr;
  type_node* tail_ = nullptr;
  std::size_t size_ = 0;
};

template <typename T>
list_of<T>::~list_of() {
  for (type_node *head, *current_node = head_; current_node != nullptr; current_node = head) {
    head = current_node->next_;
    delete current_node;
  }
}

template <typename T>
void list_of<T>::push_back(T input) {
  auto* new_tail = new type_node{input, nullptr};
  if (tail_) {
    tail_->next_ = new_tail;
  } else {
    head_ = new_tail;
  }

  tail_ = new_tail;
  ++size_;
}

template <typename T>
T& list_of<T>::At(std::size_t index) {
  if (index > Size()) {
    throw std::out_of_range("input index > size of list");
  }
  if (index == 0) {
    return head_->data_;
  }
  auto* node = head_;
  for (u64 idx = 0; idx < index; ++idx) {
    node = node->next_;
  }

  return node->data_;
}

}  // namespace vs

#endif  // STUDY_OF_ALGORITHMS_LIST_OF_H
