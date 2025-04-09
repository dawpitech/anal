/*
** EPITECH PROJECT, 2025
** anal
** File description:
** Events.hpp
*/

#ifndef EVENTS_HPP
    #define EVENTS_HPP

    #include <optional>

    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    enum class EventType
    {
        UNKNOWN,
        KEYBOARD,
        MOUSE,
        CLOSE,
    };

    /**
     * @enum Keys
     * @brief List of keyboard keys supported
     */
    enum class Keys
    {
        KEY_A,
        KEY_B,
        KEY_C,
        KEY_D,
        KEY_E,
        KEY_F,
        KEY_G,
        KEY_H,
        KEY_I,
        KEY_J,
        KEY_K,
        KEY_L,
        KEY_M,
        KEY_N,
        KEY_O,
        KEY_P,
        KEY_Q,
        KEY_R,
        KEY_S,
        KEY_T,
        KEY_U,
        KEY_V,
        KEY_W,
        KEY_X,
        KEY_Y,
        KEY_Z,
        KEY_0,
        KEY_1,
        KEY_2,
        KEY_3,
        KEY_4,
        KEY_5,
        KEY_6,
        KEY_7,
        KEY_8,
        KEY_9,
        KEY_ENTER,
        KEY_SPACE,
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
    class KeyEvent
    {
        public:
            Keys key;
            State state;
    };

    /**
     * @class MouseEvent
     * @brief Event of a mouse key being pressed
     */
    class MouseEvent
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
    class CloseEvent {};

    /**
     * @class Event
     * @brief Class containing every possible event type
     */
    class Event
    {
        public:
            EventType type = EventType::UNKNOWN;
            std::optional<KeyEvent> keyEvent;
            std::optional<MouseEvent> mouseEvent;
            std::optional<CloseEvent> closeEvent;
    };
}
#endif //EVENTS_HPP
