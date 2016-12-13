#pragma once
// Ceci est l'interface pour le composant physique, sa fonction d'update prend en parametre une référence d'un GameObject

#include "GameObject.h"

class PhysicsComponent
{
public:
	virtual ~PhysicsComponent();
	virtual void Update(GameObject& go) = 0;
};

