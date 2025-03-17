/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IDisplay.hpp
*/

#ifndef IDISPLAY_HPP
    #define IDISPLAY_HPP

    #include <string>

    #include "ISprite.hpp"
    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the
 *          Arcade project
 */
namespace anal
{
    /**
    * @interface IDisplay
    * @brief Interface for display renderer
    */
    class IDisplay
    {
        public:
            IDisplay() = default;
            virtual ~IDisplay() = default;

            /**
             * @brief Draw a sprite in the frame buffer
             * @details Add a sprite to the sprite queue that will be rendered
             *          to the window buffer on the next render call
             */
            virtual void drawSprite(const ISprite&) = 0;

            /**
             * @brief Draw a text in the frame buffer
             * @details Add a text to the text queue that will be rendered
             *          to the window buffer on the next render call
             * @note The text render buffer will always be on top of the
             *       sprite buffer
             */
            virtual void drawText(const std::string&, Vector2<int>) = 0;

            /**
             * @brief Unload a sprite from memory
             * @details Destruct the inner of the sprite thus freeing the
             *          memory. Should be called only when the sprite will not
             *          be reused in a reasonable amount of time
             */
            virtual void unloadSprite(ISprite&) = 0;

            /**
             * @brief Set the window title
             */
            virtual void setWindowTitle(const std::string&) = 0;

            /**
             * @brief Render the render queues on the window buffer
             * @details Render first the sprite queue, then the text queue
             */
            virtual void render() = 0;

            /**
             * @brief Clear the entire window in black
             */
            virtual void clear() = 0;

            /**
             * @brief Method to play a sound
             * @warning not yet standardized
             */
            virtual void playSound() = 0;
    };
};
#endif //IDISPLAY_HPP
