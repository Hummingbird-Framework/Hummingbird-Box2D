#include "PhysicsWorld.h"

using namespace hb;

PhysicsWorld::PhysicsWorld(b2Vec2 gravity)
{
	world = new b2World(gravity);
}


PhysicsWorld* PhysicsWorld::instance()
{
	if (s_instance == NULL)
		s_instance = new PhysicsWorld(b2Vec2(0.0, 0.0));

	return s_instance;
}


b2World* PhysicsWorld::getWorld()
{
	return world;
}


const b2World* PhysicsWorld::getWorld() const
{
	return world;
}


void PhysicsWorld::setGravity(Vector2d g)
{
	world->SetGravity(b2Vec2(g.x, g.y));
}


const Vector2d PhysicsWorld::getGravity()
{
	b2Vec2 v = world->GetGravity();
	return Vector2d(v.x, v.y);
}


b2Body* PhysicsWorld::addBody(b2BodyDef* bd)
{
	return world->CreateBody(bd);
}