// player.h

#ifndef PLAYER_H
#define PLAYER_H

#include "blob.h"

/**
 * @brief The Player class represents a player in the game.
 *
 * This class inherits from the Blob class and provides additional functionality
 * specific to the player.
 */
class Player : public Blob
{
public:
	/**
	 * @brief Constructs a new Player object.
	 */
	Player();

	/**
	 * @brief Destroys the Player object.
	 */
	virtual ~Player();

	/**
	 * @brief Manages the movement of the player.
	 *
	 * This function is responsible for updating the player's position based on the
	 * specified deltaTime and key input.
	 *
	 * @param deltaTime The time elapsed since the last frame.
	 * @param key The key input that determines the player's movement.
	 */
	void manageMovement(float deltaTime, int key);

#if debug
	int sizeincrease = 5;
#endif

private:
	/**
	 * @brief Updates the player's state.
	 *
	 * This function is called internally to update the player's state based on the
	 * specified deltaTime.
	 *
	 * @param deltaTime The time elapsed since the last frame.
	 */
	void update(float deltaTime);
};

#endif /* PLAYER_H */
