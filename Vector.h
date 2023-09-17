/**
 * @file Vector.h
 * @author Daniel Wright
 * @date 2023-09-16
 * @brief Vector.h class
 * 
 * Contains all the variables that are used in the Vector.cpp class
 */

#ifndef VECTOR_H
#define VECTOR_H
#include <fstream>
#include <iostream>


class Vector {
 private:
 int *vec_ptr;
 int vec_size;
 int vec_capacity;
  
 public:
 Vector();
 Vector(const Vector &other);
 ~Vector();
 Vector& operator=(const Vector &other);
 int size() const;
 int capacity() const;
 void push_back(int element);
 void reserve(int n);
 int& operator[](unsigned int index);
  
};
#endif 
