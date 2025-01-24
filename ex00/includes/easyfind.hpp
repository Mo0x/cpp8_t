/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:54:22 by mgovinda          #+#    #+#             */
/*   Updated: 2025/01/24 16:14:48 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <exception>

class NotFound : public std::exception
{
	public:
	virtual const char *what() const throw();
};

template <typename T>
T &easyfind(std::vector<T> &v, T to_find)
{
	for (std::size_t i = 0; i < v.size(); i++)
	{
		if (v[i] == to_find)
			return (v[i]);
	}
	throw NotFound();
}

#endif
