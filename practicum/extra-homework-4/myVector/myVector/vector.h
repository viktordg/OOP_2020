#pragma once

template <class T>
//без да искам го написах с малка буква
class vector
{
private:
	T* data;
	size_t size;
	size_t capacity;
	void erase()
	{
		delete[] data;
	}
	void copy(const vector<T> &other)
	{
		this->size = other.size;
		this->capacity = other.capacity;
		this->data = new T[this->capacity];
		for (size_t i = 0; i < this->size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	void resize()
	{
		this->capacity *= 2;
		T* buffer = new T[this->capacity];
		for (size_t i = 0; i < this->size; i++)
		{
			buffer[i] = this->data[i];
		}
		this->erase();
		this->data = buffer;

	}
public:
	vector();
	vector(size_t size, size_t capacity, const T &data);
	vector(const vector<T> &other);
	void push_back(const T &elem);
	void pop_back();
	void push_front(const T &elem);
	void pop_front();
	void push_at(int index, const T &elem);
	void pop_at(int index);
	void pop_by_data(T data);
	size_t getSize() const;
	bool isEmpty() const;
	void print();
	T& operator[] (size_t index);
	vector<T>& operator= (const T& elem);
	vector<T> operator+ (const T& elem) const;
	vector<T>& operator+= (const T& elem);
	bool operator== (const vector<T>& other) const;
	bool operator!= (const vector<T>& other) const;
	~vector();
};

