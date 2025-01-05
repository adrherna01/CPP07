/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrianhdt.2001@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:07:09 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/05 15:01:48 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void swap (T& a, T& b)
{
	if (typeid(a) != typeid(b)) {
		std::cerr << "Error: Arguments must be of the same type!" << std::endl;
		return;
	}

	T temp = b;
	b = a;
	a = temp;
}

template <typename T>
T min(T& a, T& b)
{
	if (typeid(a) != typeid(b)) {
		std::cerr << "Error: Arguments must be of the same type!" << std::endl;
		return;
	}

	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(T& a, T& b)
{
	if (typeid(a) != typeid(b)) {
		std::cerr << "Error: Arguments must be of the same type!" << std::endl;
		return;
	}

	if (a > b)
		return (a);
	else
		return (b);
}

#endif