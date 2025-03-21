/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IRenderer.hpp
*/

// ReSharper disable CppClassCanBeFinal
#ifndef IRENDERER_HPP
    #define IRENDERER_HPP

    #include <memory>
    #include <string>
    #include <vector>

    #include "Events.hpp"
    #include "IModule.hpp"
    #include "ISprite.hpp"
    #include "Vector2.hpp"

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
    * @interface IRenderer
    * @brief Interface for game renderer
    * @exception IRenderer::Exception Renderer exception
    */
    class IRenderer : public IModule
    {
        public:
            IRenderer() = default;
            virtual ~IRenderer() = default;

            /**
             * @exception Exception
             * @brief Renderer exception
             */
            class Exception : public std::exception {};

            /**
             * @brief Draw a sprite in the frame buffer
             * @details Add a sprite to the sprite queue that will be rendered to the window buffer on the next render call
             * @param sprite sprite to be rendered; is immutable.
             */
            virtual void drawSprite(const ISprite& sprite) = 0;

            /**
             * @brief Draw a text in the frame buffer
             * @details Add a text to the text queue that will be rendered to the window buffer on the next render call
             * @note The text render buffer will always be on top of the sprite buffer
             */
            virtual void drawText(const std::string&, Vector2<int>) = 0;

            /**
             * @brief Set the window title
             */
            virtual void setWindowTitle(const std::string&) = 0;

            /**
             * @brief Render the render queues on the window buffer
             * @details Render first the sprite queue, then the text queue
             * @throw IRenderer::exception If couldn't render
             */
            virtual void render() = 0;

            virtual std::vector<Event>& getEvents() = 0;

            /**
             * @brief Clear the entire window in black
             * @note Act directly on the window buffer, not the sprite/text queue, will not wait for the next render
             */
            virtual void clear() = 0;
    };
}

extern "C" std::unique_ptr<ANAL::IRenderer> uwu_entrypoint_renderer(void);
#endif //IRENDERER_HPP
