/*
** EPITECH PROJECT, 2025
** anal
** File description:
** ISprite.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef ISPRITE_HPP
    #define ISPRITE_HPP

    #include <utility>

    #include "IAsset.hpp"
    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
     * @interface ISprite
     * @brief Interface for all game sprites, meaning a current objet with a texture and a position
     * @exception ISprite::Exception
     */
    class ISprite
    {
        public:
            ISprite() = default;
            virtual ~ISprite() = default;

            /**
             * @exception Exception
             * @brief Sprite exception
             */
            class Exception : public std::exception {};

            /**
             * @brief Sprite position getter
             * @return the current sprite position
             */
            virtual const Vector2<int>& getPos() const = 0;

            /**
             * @brief Sprite position setter
             * @param vecPos the new sprite position
             */
            virtual void setPos(Vector2<int> vecPos) = 0;

            /**
             * @brief Sprite asset getter
             * @return the current sprite asset
             */
            virtual const IAsset& getAsset() const = 0;

            /**
             * @brief Sprite asset setter
             * @param asset the new sprite asset
             */
            virtual void setAsset(IAsset& asset) = 0;
    };
}
#endif //ISPRITE_HPP
