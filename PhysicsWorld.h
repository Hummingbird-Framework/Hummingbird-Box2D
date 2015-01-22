#ifndef HB_PHYSICS_WORLD_H
#define HB_PHYSICS_WORLD_H
#include <Box2D/Box2D.h>
#include "../Hummingbird-Base/Vector3d.h"

namespace hb
{
	class PhysicsWorld
	{
	public:
		PhysicsWorld();
		static PhysicsWorld* instance();

		const b2World* getWorld();

		void setGravity(Vector3d g);
		const Vector3d getGravity();

	private:
		static PhysicsWorld* s_instance;
		b2World* world;
	};
}
#endif