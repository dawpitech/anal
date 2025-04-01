/*
** EPITECH PROJECT, 2025
** anal
** File description:
** Events.hpp
*/

#ifndef EVENTS_HPP
    #define EVENTS_HPP

    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
     * @enum Event
     * @brief Enum containing all events that can send the Renderer to the Game
     * @note The close event might not be sent by every Renderer
     * @note Keys used in the global context (back to menu, change renderer, etc) will not be sent to the Game
     */
    class Event {};

    enum class Keys
    {
        ARROW_UP,
        ARROW_LEFT,
        ARROW_RIGHT,
        ARROW_DOWN,
    };

    enum class State
    {
        PRESSED,
        RELEASED,
    };

    enum class MouseKeys
    {
        LEFT_CLICK,
        MIDDLE_CLICK,
        RIGHT_CLICK,
    };

    class KeyEvent : public Event
    {
        public:
            Keys key;
            State state;
    };

    class MouseEvent : public Event
    {
        public:
            Vector2<int> coords;
            MouseKeys key;
            State state;
    };
    class CloseEvent : public Event {};
}
#endif //EVENTS_HPP
