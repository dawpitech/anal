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

/**
 * @brief Arcade Native Agnostic Layer
 * @details Namespace containing all the standardized interfaces for the Arcade project
 */
namespace ANAL
{
    /**
    * @interface IArcade
    * @brief Interface for assets
    */
    class IArcade
    {
        public:
            IArcade() = default;
            virtual ~IArcade() = default;

            /**
             * @brief Generate a new asset instance
             * @return Instance implementing ANAL::IAsset
             */
            [[nodiscard]] virtual std::unique_ptr<IAsset> newAsset() const = 0;

            /**
             * @brief Generate a new entity instance
             * @return Instance implementing ANAL::IEntity
             */
            [[nodiscard]] virtual std::unique_ptr<IEntity> newEntity() const = 0;

            /**
             * @brief Get the current playername
             * @return Const ref on the playername string
             */
            [[nodiscard]] virtual const std::string& getPlayerName() const = 0;

            /**
             * @brief Set the player highscore of the current game
             * @param score player's score, should be greater than the previous one
             * @note No check on the validness of the score are performed by the Arcade
             */
            virtual void setPlayerHighscore(int score) = 0;

            /**
             * @brief Get the player highscore in the current loaded game
             * @param playerName playername
             * @return the user score, 0 if no record found in the save
             */
            [[nodiscard]] virtual int getPlayerHighscore(const std::string& playerName) const = 0;
    };
}
#endif //IARCADE_HPP
