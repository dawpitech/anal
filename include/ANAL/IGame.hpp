/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IGame.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef IGAME_HPP
    #define IGAME_HPP

    #include <exception>
    #include <memory>
    #include <vector>

    #include "Events.hpp"
    #include "IModule.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace anal
{
    /**
     * @interface IGame
     * @brief Interface describing an Arcade game
     * @exception IGame::Exception
     */
    class IGame : public IModule
    {
        public:
            IGame() = default;
            virtual ~IGame() = default;
            /**
             * @exception Exception
             * @brief Game exception
             */
            class Exception : public std::exception {};

            /**
             * @brief Process the Event send by the Renderer
             */
            virtual void processEvents(const std::vector<Event>&) = 0;

            /**
             * @brief Tick the game
             */
            virtual void compute() = 0;

            /**
             * @brief Render the game to the renderer sprite/text queue
             */
            virtual void render() = 0;
    };
}

extern "C" std::unique_ptr<anal::IGame> uwu_entrypoint_game(void) = delete;
#endif //IGAME_HPP
