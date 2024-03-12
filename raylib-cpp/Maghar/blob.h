// blob.h

#ifndef BLOB_H
#define BLOB_H

#include <entity.h>

/**
 * @brief The Blob class represents a blob entity.
 *
 * This class inherits from the Entity class and provides additional functionality specific to blobs.
 */
class Blob : public Entity
{
public:
	/**
	 * @brief Default constructor for the Blob class.
	 */
	Blob();

	/**
	 * @brief Destructor for the Blob class.
	 */
	virtual ~Blob();

	/**
	 * @brief Updates the blob's state based on the elapsed time.
	 *
	 * @param deltaTime The time elapsed since the last update.
	 */
	void update(float deltaTime);

	/**
	 * @brief Manages the movement of the blob.
	 *
	 * @param deltaTime The time elapsed since the last update.
	 */
	void manageMovement(float deltaTime);

	/**
	 * @brief Clamps the blob's position within the game boundaries.
	 */
	void clamp();

	/**
	 * @brief Gets the size of the blob.
	 *
	 * @return The size of the blob.
	 */
	float getSize() { return _size; }

	/**
	 * @brief Gets the speed of the blob.
	 *
	 * @return The speed of the blob.
	 */
	float getSpeed() { return _speed; }

	/**
	 * @brief Gets the velocity of the blob.
	 *
	 * @return The velocity of the blob.
	 */
	Vector2 getVelocity() { return _velocity; }

private:
	/**
	 * @brief Calculates the speed of the blob based on its size.
	 */
	void calculateSpeed();

protected:
	Vector2 _velocity; ///< The velocity of the blob.
	float _size;	   ///< The size of the blob.
	float _speed;	   ///< The speed of the blob.
};

#endif /* BLOB_H */
