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
namespace anal
{
    /**
     * @interface IAsset
     * @brief Interface to describe an asset
     * @details Details about an asset, meaning it's texture and alternative render modes
     */
    class IAsset
    {
        public:
        IAsset() = default;
        virtual ~IAsset() = default;

        /**
         * @brief set the path to the asset texture
         */
        virtual void setTexturePath(const std::string&) = 0;

        /**
         * @brief set the alternate render of the asset
         * @param alternateRender the character rendered in place of the texture
         */
        virtual void setAlternativeRender(char alternateRender) = 0;
    };
}
#endif //IASSET_HPP
