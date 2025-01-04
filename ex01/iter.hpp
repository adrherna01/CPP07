/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 13:26:12 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/04 14:00:01 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void iter(T* array, int len, void(*func)(T&))
{
    for (int i = 0; i < len; i++)
        func(array[i]);
}