#ifndef HB_COLLISION_COMPONENT_H
#define HB_COLLISION_COMPONENT_H
#include <memory>
#include <Box2D/Box2D.h>
#include "../Hummingbird-Base/DataComponent.h"
#include "../Hummingbird-Base/Transform.h"
#include "PhysicsWorld.h"

namespace hb
{
	class CollisionComponent : public DataComponent<b2Body*>, public Transform
	{
	public:
		CollisionComponent(b2Body* b);
		virtual ~CollisionComponent() override;
		
		void setBody(b2Body* b);
		const b2Body* getBody() const;

		const Vector3d getPosition();

		void preUpdate() override;

	private:
		Vector3d pos;
	};
}
#endif