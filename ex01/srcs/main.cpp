/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:00:39 by yabukirento       #+#    #+#             */
/*   Updated: 2025/06/11 13:54:53 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"
#include "../includes/Serializer.hpp"

#include <iostream>

int main() {
    // Data構造体のインスタンスを作成
    Data original;
    original.name = "Yabuki";
    original.age = 25;
    original.score = 88.5f;

    // アドレスを表示
    std::cout << "Original Data pointer : " << &original << std::endl;

    // シリアライズ（ポインタ→整数）
    unsigned long raw = Serializer::serialize(&original);
    std::cout << "Serialized unsigned long   : " << raw << std::endl;

    // デシリアライズ（整数→ポインタ）
    Data* deserialized = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer  : " << deserialized << std::endl;

    // 中身の確認
    std::cout << "\n=== Deserialized Data Content ===" << std::endl;
    std::cout << "Name  : " << deserialized->name << std::endl;
    std::cout << "Age   : " << deserialized->age << std::endl;
    std::cout << "Score : " << deserialized->score << std::endl;

    // ポインタ比較
    if (deserialized == &original) {
        std::cout << "\n✅ Pointers match. Serialization successful!" << std::endl;
    } else {
        std::cout << "\n❌ Pointers do NOT match!" << std::endl;
    }

    return 0;
}
