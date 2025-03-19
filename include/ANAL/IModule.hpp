/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IModule.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef IMODULE_HPP
    #define IMODULE_HPP

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace anal
{
    /**
     * @interface IModule
     * @brief Arcade module interface, is mandatory for every shared library loaded
     */
    class IModule
    {
        public:
            IModule() = default;
            virtual ~IModule() = default;

            /**
             * @enum ModuleType
             * @brief Enum of supported types of Arcade modules
             */
            enum class ModuleType
            {
                UNKNOWN,
                GAME,
                RENDERER,
                OTHER,
            };

            /**
             * @enum ModuleVersion
             * @brief Enum of Arcade modules versions
             * @warning Comparison on the value of the version should ALWAYS be absolute to prevent issue when loading a newer version of module than is supported
             */
            enum class ModuleVersion
            {
                UNKNOWN,
                V1_0_0,
                NOT_SUPPORTED,
            };

            /**
             * @brief Access the module type
             * @return the type of the module
             */
            virtual ModuleType getModuleType() = 0;

            /**
             * @brief Access the module version
             * @return the version of the module
             */
            virtual ModuleVersion getModuleVersion() = 0;
    };
}
#endif //IMODULE_HPP
