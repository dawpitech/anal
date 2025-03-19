/*
** EPITECH PROJECT, 2025
** anal
** File description:
** Vector2.hpp
*/

#ifndef VECTOR2_HPP
    #define VECTOR2_HPP

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace anal
{
    /**
     * @class Vector2
     * @brief Data type to store 2 values of the same type
     * @tparam T type of the value stored in the Vector2
     */
    template <typename T>
    class Vector2
    {
        public:
            /**
             * @brief Initialize a vector2 with values
             * @param x 'x' data
             * @param y 'y' data
             */
            Vector2(T x, T y) : x(x), y(y) {}

            /**
             * @brief 'x' data
             */
            T x;

            /**
             * @brief 'y' data
             */
            T y;
    };
}
#endif //VECTOR2_HPP
