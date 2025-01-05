/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:26:09 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/05 15:05:13 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void printElement(T& element) {
    std::cout << element << std::endl;
}

int main()
{
	std::cout << "int array testing:" << std::endl;
	{
		int arr[] = {1, 2, 3, 4, 5};
		int length = sizeof(arr) / sizeof(arr[0]);
		iter(arr, length, printElement<int>);
	}

	std::cout << "float array testing:" << std::endl;
	{
		float arr[] = {1.4, 2.4, 3.4, 4.4, 5.4};
		float length = sizeof(arr) / sizeof(arr[0]);
		iter(arr, length, printElement<float>);
	}

	std::cout << "double array testing:" << std::endl;
	{
		double arr[] = {1.1, 2.1, 3.1, 4.1, 5.1};
		double length = sizeof(arr) / sizeof(arr[0]);
		iter(arr, length, printElement<double>);
	}

	return 0;
}