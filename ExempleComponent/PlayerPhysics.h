#pragma once
#include "PhysicsComponent.h"
class PlayerPhysics : public PhysicsComponent
{
private:
	static const int GRAVITY;
public:
	void Update(GameObject& go)
	{
		go.position.y += GRAVITY;
	}
};

const int PlayerPhysics::GRAVITY = 2;

