#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP

#include "node.hpp"

#include  "student.hpp"

template <class K, class V>
class Dictionary {
public:
    Dictionary() {
        this->first = nullptr;
    }

    void put(K key, V value) {
        if (this->first == nullptr) {
            this->first = new Node<K, V>(key, value);
            size++;
        } else {
            Node<K, V>* current = this->first;
            while (current->next && current->key != key) {
                current = current->next;
            }
            if (current->key == key)
                current->value = value;
            else
            {
                current->next = new Node<K, V>(key, value);
                size++;
            }
        }
    }

    V search(K key) {
        Node<K, V>* current = this->first;
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return {};
    }

    int getSize() const {
        return size;
    }

private:
    Node<K,V>* first;
    int size = 0;
};

template class Dictionary<int, Student>;

#endif // DICTIONARY_HPP
