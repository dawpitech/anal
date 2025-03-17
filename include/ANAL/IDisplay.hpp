/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IDisplay.hpp
*/

#ifndef IDISPLAY_HPP
    #define IDISPLAY_HPP

    #include <string>
    #include <vector>

    #include "ISprite.hpp"
    #include "Vector2.hpp"

class IDisplay
{
    void drawSprite(const ISprite&);
    void drawText(const std::string&, Vector2<int>);
    void unloadSprite(ISprite&);
    void setWindowTitle(const std::string&);
    void render(const ISprite&);
    void render(std::vector<const ISprite&>);
    void clear();
    /**
     * @todo not yet standardised
     */
    void playSound();
};
#endif //IDISPLAY_HPP
