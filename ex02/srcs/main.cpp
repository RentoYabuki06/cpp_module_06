/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:15:34 by yabukirento       #+#    #+#             */
/*   Updated: 2025/06/11 14:00:09 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/identify.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <typeinfo>

int main() {
    std::cout << "\n=== Running 10 Random Type Identification Tests ===\n" << std::endl;
    std::srand(static_cast<unsigned int>(std::time(NULL)));
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
