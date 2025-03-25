/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IAsset.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef IASSET_HPP
    #define IASSET_HPP

    #include <string>

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
    * @interface IAsset
    * @brief Interface for assets
    */
    class IAsset
    {
        public:
            IAsset() = default;
            virtual ~IAsset() = default;

            /**
             * @brief Set the path to the asset texture resource file
             */
            virtual void setTexturePath(const std::pmr::string&) = 0;

            /**
             * @brief Get the path to the asset texture resource file
             * @return Path to the resource file, can be absolute or relative
             */
            [[nodiscard]] virtual const std::string& getTexturePath() const = 0;

            /**
             * @brief Set the alternate render display of the asset
             * @details This character represent what will be shown if the renderer doesn't support graphical mode
             */
            virtual void setAlternateRender(char) = 0;

            /**
             * @brief Get the alternate render display of the asset
             * @return The alternate render character
             */
            [[nodiscard]] virtual char getAlternateRender() const = 0;
    };
}
#endif //IASSET_HPP
