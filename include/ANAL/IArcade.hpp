/*
** EPITECH PROJECT, 2025
** anal
** File description:
** IArcade.hpp
*/

#ifndef IARCADE_HPP
    #define IARCADE_HPP
#include <memory>

#include "IAsset.hpp"
#include "IEntity.hpp"

namespace ANAL
{
    class IArcade
    {
        public:
            IArcade() = default;
            virtual ~IArcade() = default;

            [[nodiscard]] virtual std::unique_ptr<IAsset> newAsset() const = 0;
            [[nodiscard]] virtual std::unique_ptr<IEntity> newEntity() const = 0;

            [[nodiscard]] virtual const std::string& getPlayerName() const = 0;
            virtual void setPlayerHighscore(int score) = 0;
            [[nodiscard]] virtual int getPlayerHighscore(const std::string& playerName) const = 0;
    };
}
#endif //IARCADE_HPP
