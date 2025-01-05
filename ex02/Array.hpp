/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:46:04 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/05 14:55:24 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <stdexcept>
#include <sys/_types/_size_t.h>

template <typename T>

class Array {
	private:
		T* _array;
		int _size;

	public:
		Array() : _size(0) {
			_array = new T[_size];
		}

		Array(int n) : _size(n) {
			_array = new T[_size];

			for (int i = 0; i < _size; i++)
				_array[i] = i;
		}

		Array(const Array& other) {
			_size = other._size;
			_array = new T[other._size];

			for (int i = 0; i < other._size; i++)
				_array[i] = other._array[i];
		}

		Array& operator=(const Array& other) {
			if (this != &other)
			{
				delete [] _array;
				_array = new T[other._size];
				_size = other._size;

				for (int i = 0; i < other._size; i++)
				_array[i] = other._array[i];
			}
			return (*this);
		}

		T& operator[](int index) {
			if (index >= _size || index < 0)
				throw std::exception();

			return (_array[index]);
		}

		int size() const {
			return (_size);
		}

};