/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrherna <adrherna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:07:09 by adrherna          #+#    #+#             */
/*   Updated: 2025/01/02 11:18:23 by adrherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T>

class Whatever
{
    private:
        
    public:
        static void swap(T& a, T& b);
        static void min(T a, T b);
        static void max(T a, T b);
};

#endif