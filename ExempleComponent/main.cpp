#pragma once

#include "GameObject.h"
#include "PlayerPhysics.h"

// Ici plusieurs problèmes
// Dans l'appelle de new GameObject, visual me propose des constructeur que je n'ai pas implémenté
// comme : GameObject(GameObject &&) , GameObject(const GameObject &) et celui que j'ai implémenté GameObject(PhysicsComponent * newPhysics)

int main()
{
	GameObject* joueur = new GameObject(new PlayerPhysics());

	return 0;
}