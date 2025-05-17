/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:39:53 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/17 19:52:45 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main() {
    const char* testInputs[] = {
        "'a'",      // char literal
        "0",        // int
        "42",       // int
        "127",      // int (最大表示可能char)
        "-42",      // int
        "4.2f",     // float
        "-4.2f",    // float
        "nanf",     // float pseudo
        "+inff",    // float pseudo
        "-inff",    // float pseudo
        "4.2",      // double
        "-4.2",     // double
        "nan",      // double pseudo
        "+inf",     // double pseudo
        "-inf",     // double pseudo
        "999999999999999999999999999999", // int overflow
        "hello",    // invalid input
        NULL        // 終端マーカー
    };

    for (int i = 0; testInputs[i] != NULL; ++i) {
        std::cout << "===== Test " << i + 1 << ": \"" << testInputs[i] << "\" =====" << std::endl;
        ScalarConverter::convert(testInputs[i]);
        std::cout << std::endl;
    }

    return 0;
}
