/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:22:09 by mgovinda          #+#    #+#             */
/*   Updated: 2025/01/28 19:37:17 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "Span.hpp"

Span::Span() :
	m_size(0)
{
	this->m_v.reserve(this->m_size);
}

Span::Span(unsigned int size) :
	m_size(size)
{
	this->m_v.reserve(size);
}

Span::Span(const Span &src) :
	m_v(src.m_v),
	m_size(src.m_size)
{
	return ;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->m_v = src.m_v;
		this->m_size = src.m_size;
	}
	return *this;
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int n)
{
	if (this->m_v.size() > this->m_size - 1)
		throw std::overflow_error("Cannot add more numbers: Span is full.");
	this->m_v.push_back(n);
}

unsigned int Span::shortestSpan(void)
{
	unsigned int ret;
	std::vector<int> tmp = this->m_v;

	if (this->m_v.size() < 2)
		throw Span::NoSpanFound();
	std::stable_sort(tmp.begin(), tmp.end());

	ret = tmp.end() - tmp.begin();
	auto n = tmp.begin();
	auto m = tmp.begin() + 1;
	while (m != tmp.end())
	{
		if (m - n < ret)
			ret = m - n;
		n++;
		m++;
	}
	return (ret);
}

unsigned int Span::longestSpan(void)
{
	std::vector<int> tmp = this->m_v;
	if (this->m.size() < 2)
		throw Span::NoSpanFound();
	std::stable_sort(tmp.begin(), tmp.end());
	return (tmp.end() - tmp.begin());
}

const char *Span::NoSpanFound::what() throw()
{
	return ("No span found");
}
