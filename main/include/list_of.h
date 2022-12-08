//
// Created by sasha on 08.12.2022.
//

#ifndef STUDY_OF_ALGORITHMS_LIST_OF_H
#define STUDY_OF_ALGORITHMS_LIST_OF_H

#include <cstddef>

#include "types.h"

namespace vs {

template <typename T>
class list_of {
 public:
  std::size_t Size() const { return size_; }

  void push_back(T input) {
    auto* new_tail = new Node{input, nullptr};
    if (tail_) {
      tail_->next_ = new_tail;
    } else {
      head_ = new_tail;
    }

    tail_ = new_tail;
    ++size_;
  }

  T& at(std::size_t index) {
    if (index > Size()) {
      throw std::out_of_range("input index > size of list");
    }
    if(index == 0) {
      return head_->data_;
    }
    auto* node = head_;
    for (u64 idx = 0; idx < index; ++idx) {
      node = node->next_;
    }

    return node->data_;
  }

  ~list_of() {
    for(Node *head, *current_node = head_; current_node != nullptr; current_node = head) {
      head = current_node->next_;
      delete current_node;
    }
  }

 private:
  struct Node {
    T data_;
    Node* next_;
  };

  Node* head_ = nullptr;
  Node* tail_ = nullptr;
  std::size_t size_ = 0;
};

}  // namespace vs

#endif  // STUDY_OF_ALGORITHMS_LIST_OF_H
