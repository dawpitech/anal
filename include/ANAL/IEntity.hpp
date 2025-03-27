/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IEntity.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef IENTITY_HPP
    #define IENTITY_HPP

    #include "IAsset.hpp"
    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
    * @interface IEntity
    * @brief Interface for entities
    */
    class IEntity
    {
        public:
            IEntity() = default;
            virtual ~IEntity() = default;

            /**
             * @brief Set the entity position
             * @note The rendering is a grid of 10x10, thus the value of any position shouldn't exceed 9 or the entity would be rendered offscreen!
             */
            virtual void setPos(Vector2<int>) = 0;

            /**
             * @brief Get the current entity position
             * @return The position vector
             */
            [[nodiscard]] virtual const Vector2<int>& getPos() const = 0;

            /**
             * @brief Set the entity asset used when rendering
             */
            virtual void setAsset(IAsset &asset) = 0;

            /**
             * @brief Get the current entity asset
             * @return The entity asset
             */
            [[nodiscard]] virtual const IAsset& getAsset() const = 0;
    };
}
#endif //IENTITY_HPP
