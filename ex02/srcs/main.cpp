/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:34 by yabukirento       #+#    #+#             */
/*   Updated: 2025/06/04 21:36:19 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/identify.hpp"
#include <iostream>

int main() {
    std::cout << "\n=== Running 10 Random Type Identification Tests ===\n" << std::endl;

    for (int i = 0; i < 10; ++i) {
        std::cout << "Test " << i + 1 << ":" << std::endl;
        Base* obj = generate();

        std::cout << "identify(Base*): ";
        identify(obj);

        std::cout << "identify(Base&): ";
        identify(*obj);

        delete obj;
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}
