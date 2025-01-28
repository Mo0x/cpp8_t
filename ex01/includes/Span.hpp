/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgovinda <mgovinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:53:51 by mgovinda          #+#    #+#             */
/*   Updated: 2025/01/28 19:36:41 by mgovinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span
{
	private:
	std::vector<int>	m_v;
	unsigned int				m_size;

	public:
	// orthodox
	Span();
	Span(unsigned int size);
	Span(Span const &src);
	Span &operator=(Span const &src);
	~Span();

	//get set
	unsigned int				get_size();
	std::vector<int>	get_v();

	//member func
	void			addNumber(int n);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	//exceptions
	class NoSpanFound : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};

#endif
