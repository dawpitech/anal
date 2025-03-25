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
    #include "IEntity.hpp"
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
    class IRenderer
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
             * @brief Draw an entity
             * @details Draw the entity at its current position on the window buffer
             * @param entity Entity to be rendered; is immutable.
             * @throw IRenderer::Exception Throw when cannot draw the entity
             */
            virtual void drawEntity(const IEntity& entity) = 0;

            /**
             * @brief Draw a text
             * @details Draw the text at its current position on the window buffer
             * @throw IRenderer::Exception Throw when cannot draw the text
             */
            virtual void drawText(const std::string&, Vector2<int>) = 0;

            /**
             * @brief Set the window title
             */
            virtual void setWindowTitle(const std::string&) = 0;

            /**
             * @brief Render the render queues on the window buffer
             * @details Render first the sprite queue, then the text queue
             * @throw IRenderer::Exception If couldn't render
             */
            virtual void render() = 0;

            virtual std::vector<Event>& getEvents() = 0;

            /**
             * @brief Clear the entire window in black
             * @note Act directly on the window buffer, will not wait for the next render
             */
            virtual void clear() = 0;
    };
}

/**
 * @brief Renderer module entrypoint
 * @return Unique ptr on a new IRenderer instance
 */
extern "C" std::unique_ptr<ANAL::IRenderer> uwu_entrypoint_renderer(void);
#endif //IRENDERER_HPP
