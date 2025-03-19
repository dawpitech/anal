/*
** EPITECH PROJECT, 2025
** anal
** File description:
** Events.hpp
*/

#ifndef EVENTS_HPP
    #define EVENTS_HPP

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace anal
{
    /**
     * @enum Event
     * @brief Enum containing all events that can send the Renderer to the Game
     * @note The close event might not be sent by every Renderer
     * @note Keys used in the global context (back to menu, change renderer, etc) will not be sent to the Game
     */
    enum class Event
    {
        PRESSED_KEY_A,
        PRESSED_KEY_B,
        PRESSED_KEY_C,
        PRESSED_KEY_D,
        PRESSED_KEY_E,
        PRESSED_KEY_F,
        PRESSED_KEY_G,
        PRESSED_KEY_H,
        PRESSED_KEY_I,
        PRESSED_KEY_J,
        PRESSED_KEY_K,
        PRESSED_KEY_L,
        PRESSED_KEY_M,
        PRESSED_KEY_N,
        PRESSED_KEY_O,
        PRESSED_KEY_P,
        PRESSED_KEY_Q,
        PRESSED_KEY_R,
        PRESSED_KEY_S,
        PRESSED_KEY_T,
        PRESSED_KEY_U,
        PRESSED_KEY_V,
        PRESSED_KEY_W,
        PRESSED_KEY_X,
        PRESSED_KEY_Y,
        PRESSED_KEY_Z,
        PRESSED_KEY_0,
        PRESSED_KEY_1,
        PRESSED_KEY_2,
        PRESSED_KEY_3,
        PRESSED_KEY_4,
        PRESSED_KEY_5,
        PRESSED_KEY_6,
        PRESSED_KEY_7,
        PRESSED_KEY_8,
        PRESSED_KEY_9,
        PRESSED_KEY_ARROW_RIGHT,
        PRESSED_KEY_ARROW_LEFT,
        PRESSED_KEY_ARROW_UP,
        PRESSED_KEY_ARROW_DOWN,
        CLOSE, /*!< Close event send by the client, most probably sent by interacting with the close arrow*/
    };
}
#endif //EVENTS_HPP
