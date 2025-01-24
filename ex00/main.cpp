/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:06:14 by mgovinda          #+#    #+#             */
/*   Updated: 2025/01/24 16:19:25 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	{
		std::vector<int> v;
		v.push_back(0);
		v.push_back(44);
		v.push_back(23);
		v.push_back(12);
		v.push_back(123);
		v.push_back(99);
		try 
		{
			std::cout << easyfind(v, 12) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<int> v;
		v.push_back(0);
		v.push_back(44);
		v.push_back(23);
		v.push_back(12);
		v.push_back(123);
		v.push_back(99);
		try 
		{
			std::cout << easyfind(v, -42) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::vector<std::string> v;
		v.push_back("abc");
		v.push_back("super");
		v.push_back("vector");
		v.push_back("with");
		v.push_back("strings");
		v.push_back("super cool vector with strings");
		try 
		{
			std::cout << easyfind(v, std::string("super")) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
