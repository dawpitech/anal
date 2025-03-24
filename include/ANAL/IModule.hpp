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
namespace ANAL
{
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
        V1_1_0,
        NOT_SUPPORTED,
    };
}

/**
 * @brief Module entrypoint to retrieve version
 * @return Module version
 */
extern "C" ANAL::ModuleVersion uwu_get_module_version(void);

/**
 * @brief Module entrypoint to retrieve type
 * @return Module type
 */
extern "C" ANAL::ModuleType uwu_get_module_type(void);
#endif //IMODULE_HPP
