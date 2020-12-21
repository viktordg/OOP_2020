#include "stdafx.h"
#include "vector.h"
#include <cassert>

template <class T>
vector<T>::vector()
{
	size = 0;
	capacity = 0;
	data = nullptr;
}
template <class T>
vector<T>::vector(size_t size, size_t capacity, const T &data)
{
	this->data = new T[size];
	this->size = size;
	this->capacity = capacity;

	for (size_t i = 0; i < this->size; i++)
	{
		this->data[i] = data[i];
	}
}
template <class T>
vector<T>::vector(const vector<T> &other)
{
	this->copy(other);
}
template <class T>
vector<T>::~vector()
{
	this->erase();
}
template <class T>
void vector<T>::push_back(const T &elem)
{
	if (this->size == this->capacity)
	{
		this->resize();
	}

	T* buffer = new T[this->size + 1];
	for (size_t i = 0; i < this->size; i++)
	{
		buffer[i] = this->data[i];
	}
	buffer[size] = elem;
	size++;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::pop_back()
{
	T* buffer = new T[this->size - 1];
	for (size_t i = 0; i < this->size - 1; i++)
	{
		buffer[i] = this->data[i];
	}
	size--;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::push_front(const T &elem)
{
	if (this->size == this->capacity)
	{
		this->resize();
	}

	T* buffer = new T[this->size + 1];
	buffer[0] = elem;
	for (size_t i = 0; i < this->size; i++)
	{
		buffer[i+1] = this->data[i];
	}
	this->size++;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::pop_front()
{
	T* buffer = new T[this->size - 1];
	for (size_t i = 1; i < this->size; i++)
	{
		buffer[i-1] = this->data[i];
	}
	size--;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::push_at(int index, const T &elem)
{
	T* buffer = new T[this->size + 1];
	for (size_t i = 0; i < index; i++)
	{
		buffer[i] = this->data[i];
	}
	buffer[index] = elem;
	for (size_t i = index; i < this->size + 1; i++)
	{
		buffer[i] = this->data[i];
	}
	size++;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::pop_at(int index)
{
	T* buffer = new T[this->size - 1];
	for (size_t i = 0; i < index; i++)
	{
		buffer[i] = this->data[i];
	}
	for (size_t i = index; i < this->size; i++)
	{
		buffer[i] = this->data[i];
	}
	size--;

	this->erase();
	this->data = buffer;
}
template <class T>
void vector<T>::pop_by_data(T data)
{
	int index;
	for (size_t i = 0; i < this->size; i++)
	{
		if (this->data[i] != data)
		{
			index = i;
		}
	}
	this->pop_at(index);
}
template <class T>
size_t vector<T>::getSize() const
{
	return this->size;
}
template <class T>
bool vector<T>::isEmpty() const
{
	if (this->size == 0)
	{
		return true;
	}
	return false;
}
template <class T>
void vector<T>::print()
{
	cout << "Printing vector: " << endl;
	for (size_t i = 0; i < this->size; i++)
	{
		cout << this->data[i] << ", ";
	}
	cout << endl;
}
template <class T>
vector<T>& vector<T>::operator= (const T& other)
{
	if (this != &other)
	{
		this->erase();
		this->copy(other);
	}
	return *this;
}
template <class T>
T& vector<T>::operator[] (size_t index)
{
	assert(index >= 0);
	assert(index < this->size);
	return this->data[index];
}
template <class T>
vector<T> vector<T>::operator+ (const T& elem) const
{
	vector<T> result(*this);
	result += elem;
	return result;
}
template <class T>
vector<T>& vector<T>::operator+= (const T& elem)
{
	/*T *newBuffer = new T[this->size + 1];
	for (size_t i = 0; i < this->size; ++i)
	{
		newBuffer[i] = this->data[i];
	}
	newBuffer[this->size] = elem;
	this->size++;

	this->erase();
	this->data = newBuffer;*/
	this->push_back(elem);
	return *this;
}
template <class T>
bool vector<T>::operator== (const vector<T>& other) const
{
	if (this->size == other.size)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->data[i] != other.data[i])
				return false
		}
		return true;
	}
	else
		return false;
}
template <class T>
bool vector<T>::operator!= (const vector<T>& other) const
{
	if (this->size == other.size)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->data[i] != other.data[i])
				return true;
		}
		return false;
	}
	else
		return true;
}
