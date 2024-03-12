// player.h

#ifndef PLAYER_H
#define PLAYER_H

#include "blob.h"

class Player : public Blob
{
public:
	Player();
	virtual ~Player();
	void manageMovement(float deltaTime, int key);
#if debug
	int sizeincrease = 5;
#endif

private:
	void update(float deltaTime);
};

#endif /* PLAYER_H */
