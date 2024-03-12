// blob.h

#ifndef BLOB_H
#define BLOB_H

#include <entity.h>

class Blob : public Entity
{
public:
	Blob();
	virtual ~Blob();
	void update(float deltaTime);
	void manageMovement(float deltaTime);
	void clamp();
	float getSize() { return _size; }
	float getSpeed() { return _speed; }
	Vector2 getVelocity() { return _velocity; }

private:
	void calculateSpeed();

protected:
	Vector2 _velocity;
	float _size;
	float _speed;
};

#endif /* BLOB_H */
