/*
** EPITECH PROJECT, 2025
** anal
** File description:
** Vector2.hpp
*/

#ifndef VECTOR2_HPP
    #define VECTOR2_HPP

template <typename T>
class Vector2
{
    public:
        Vector2(T x, T y) : x(x), y(y) {}
        T x;
        T y;
};
#endif //VECTOR2_HPP
