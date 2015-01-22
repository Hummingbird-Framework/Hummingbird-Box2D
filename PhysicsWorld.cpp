#include "PhysicsWorld.h"

using namespace hb;

PhysicsWorld::PhysicsWorld()
{}

PhysicsWorld* PhysicsWorld::instance()
{
	if (s_instance == NULL)
		s_instance = new PhysicsWorld();

	return s_instance;
}


const b2World* PhysicsWorld::getWorld()
{
	return world;
}


void PhysicsWorld::setGravity(Vector3d g)
{
	world->SetGravity(b2Vec2(g.x, g.y));
}


const Vector3d PhysicsWorld::getGravity()
{
	return world->getGravity();
}