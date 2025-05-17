/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:42:19 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/17 19:52:35 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

static bool isChar(const std::string& str) {
	return str.length() == 3 && str.front() == '\'' && str.back() == '\'';
}

static bool isFloatPreudo(const std::string& str) {
	return str == "-inff" || str == "+inff" || str == "nanf";
}

static bool isDoublePreudo(const std::string& str) {
	return str == "-inf" || str == "+inf" || str == "nan";
}

void	ScalarConverter::convert(const std::string& literal)
{
	char	c;
	int		i;
	float	f;
	double	d;

	try
	{
		if (isChar(literal)) {
			c = literal[1];
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);
		} else if (isFloatPreudo(literal) || literal.back() == 'f') {
			f = std::strtof(literal.c_str(), NULL);
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
		} else if (isDoublePreudo(literal) || literal.find('.') != std::string::npos) {
			d = std::strtod(literal.c_str(), NULL);
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
		} else {
			i = std::stoi(literal);
			f = static_cast<float>(i);
			c = static_cast<char>(i);
			d = static_cast<double>(i);
		}

		// char
		std::cout << "char: ";
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else if (std::isnan(d) || std::isinf(d))
			std::cout << "impossible" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		// int
		std::cout << "int: ";
		if (std::isnan(d) || std::isinf(d) || d > INT_MAX || d < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << i << std::endl;
		// float
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		// double
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch(...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	
}
