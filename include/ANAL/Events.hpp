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
     * @class Event
     * @brief Class containing every possible event type
     */
    class Event {};

    /**
     * @enum Keys
     * @brief List of keyboard keys supported
     */
    enum class Keys
    {
        ARROW_UP,
        ARROW_LEFT,
        ARROW_RIGHT,
        ARROW_DOWN,
    };

    /**
     * @enum State
     * @brief Current state of the key event
     */
    enum class State
    {
        PRESSED,
        RELEASED,
    };

    /**
     * @enum MouseKeys
     * @brief List of mouse keys supported
     */
    enum class MouseKeys
    {
        LEFT_CLICK,
        MIDDLE_CLICK,
        RIGHT_CLICK,
    };

    /**
     * @class KeyEvent
     * @brief Event of a keyboard key being pressed
     * @warning Keys used in the global context (back to menu, change renderer, etc.) will not be sent to the Game
     */
    class KeyEvent : public Event
    {
        public:
            Keys key;
            State state;
    };

    /**
     * @class MouseEvent
     * @brief Event of a mouse key being pressed
     */
    class MouseEvent : public Event
    {
        public:
            Vector2<int> coords;
            MouseKeys key;
            State state;
    };

    /**
     * @class CloseEvent
     * @brief Event registered when the user asked the game to close
     * @warning The close event might not be sent by every Renderer
     */
    class CloseEvent : public Event {};
}
#endif //EVENTS_HPP
