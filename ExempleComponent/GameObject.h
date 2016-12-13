#pragma once

#include "PhysicsComponent.h"

typedef struct Point
{
	float x, y;
}Point;

class GameObject
{
private:
	PhysicsComponent * physics_;
public:
	Point position;

	GameObject(PhysicsComponent * newPhysics)
	{
		physics_ = newPhysics;
	}

	void Update()
	{
		physics_->Update(*this);
	}
};

