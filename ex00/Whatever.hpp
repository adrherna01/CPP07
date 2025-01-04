/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:07:09 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/04 13:24:06 by adrherna         ###   ########.fr       */
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
        return;  // Exit the function early
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
        return;  // Exit the function early
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
        return;  // Exit the function early
    }
    
    if (a > b)
        return (a);
    else
        return (b);
}

#endif