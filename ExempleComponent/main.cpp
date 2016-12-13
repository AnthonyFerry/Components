#pragma once

#include "GameObject.h"
#include "PlayerPhysics.h"

// Ici plusieurs probl�mes
// Dans l'appelle de new GameObject, visual me propose des constructeur que je n'ai pas impl�ment�
// comme : GameObject(GameObject &&) , GameObject(const GameObject &) et celui que j'ai impl�ment� GameObject(PhysicsComponent * newPhysics)

int main()
{
	GameObject* joueur = new GameObject(new PlayerPhysics());

	return 0;
}