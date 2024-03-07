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

private:
	/* add your private declarations */
};

#endif /* BLOB_H */
