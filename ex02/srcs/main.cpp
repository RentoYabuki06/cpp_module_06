/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:34 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/17 20:16:27 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/identify.hpp"
#include <iostream>

int main() {
    Base* obj = generate();

    std::cout << "identify(Base*): ";
    identify(obj);

    std::cout << "identify(Base&): ";
    identify(*obj);

    delete obj;
    return 0;
}
