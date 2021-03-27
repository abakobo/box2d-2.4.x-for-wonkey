/*
functions for monkey2 module wrapper
*/

#include "b2_distance_joint.h"
#include "b2_friction_joint.h"
#include "b2_gear_joint.h"
#include "b2_motor_joint.h"
#include "b2_mouse_joint.h"
#include "b2_prismatic_joint.h"
#include "b2_pulley_joint.h"
#include "b2_revolute_joint.h"
#include "b2_weld_joint.h"
#include "b2_wheel_joint.h"

#include "b2_body.h"
#include "b2_time_step.h"


b2DistanceJoint* b2JointTob2DistanceJoint(b2Joint* jptr)
{
	b2DistanceJoint* ret;

	ret=(b2DistanceJoint*)jptr;

	return ret;
}

b2FrictionJoint* b2JointTob2FrictionJoint(b2Joint* jptr)
{
	b2FrictionJoint* ret;

	ret=(b2FrictionJoint*)jptr;

	return ret;
}

b2GearJoint* b2JointTob2GearJoint(b2Joint* jptr)
{
	b2GearJoint* ret;

	ret=(b2GearJoint*)jptr;

	return ret;
}

b2MotorJoint* b2JointTob2MotorJoint(b2Joint* jptr)
{
	b2MotorJoint* ret;

	ret=(b2MotorJoint*)jptr;

	return ret;
}

b2MouseJoint* b2JointTob2MouseJoint(b2Joint* jptr)
{
	b2MouseJoint* ret;

	ret=(b2MouseJoint*)jptr;

	return ret;
}

b2PrismaticJoint* b2JointTob2PrismaticJoint(b2Joint* jptr)
{
	b2PrismaticJoint* ret;

	ret=(b2PrismaticJoint*)jptr;

	return ret;
}

b2PulleyJoint* b2JointTob2PulleyJoint(b2Joint* jptr)
{
	b2PulleyJoint* ret;

	ret=(b2PulleyJoint*)jptr;

	return ret;
}

b2RevoluteJoint* b2JointTob2RevoluteJoint(b2Joint* jptr)
{
	b2RevoluteJoint* ret;

	ret=(b2RevoluteJoint*)jptr;

	return ret;
}

/*b2RopeJoint* b2JointTob2RopeJoint(b2Joint* jptr)
{
	b2RopeJoint* ret;

	ret=(b2RopeJoint*)jptr;

	return ret;
}*/

b2WeldJoint* b2JointTob2WeldJoint(b2Joint* jptr)
{
	b2WeldJoint* ret;

	ret=(b2WeldJoint*)jptr;

	return ret;
}

b2WheelJoint* b2JointTob2WheelJoint(b2Joint* jptr)
{
	b2WheelJoint* ret;

	ret=(b2WheelJoint*)jptr;

	return ret;
}