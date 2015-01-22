#include "CollisionComponent.h"

using namespace hb;

CollisionComponent::CollisionComponent(b2Body* b, b2World* w):
DataComponent<b2Body*>(b),
world(w)
{}


CollisionComponent::~CollisionComponent()
{
	world->DestroyBody(getData());
}


void CollisionComponent::setBody(b2Body* b)
{
	setData(b);
}


const b2Body* CollisionComponent::getBody() const
{
	return getData();
}


const Vector3d CollisionComponent::getPosition()
{
	return pos;
}


void CollisionComponent::preUpdate()
{
	b2Body* b = getData();
	pos = Vector3d(b->GetPosition().x, b->GetPosition().y, 0);
}