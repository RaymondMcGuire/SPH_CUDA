#ifndef _Constants_H
#define _Constants_H

namespace Constants
{
	extern const float M_PI;

	extern const float WIDTH;
	extern const float HEIGHT;

	extern const float SCALE; // pixels per meter

	extern const int RENDER_WIDTH;
	extern const int RENDER_HEIGHT;

	extern const float WINDOW_SCALE;

	extern const float TIMESTEP;
	extern const float MAX_TIME;

	extern const int NUMBER_PARTICLES; // Along one dimension

	extern const float REST_DENSITY;

	extern const float STIFFNESS;
	extern const float VISCOCITY;
	extern const float TENSION;

	extern const float GRAVITY;

	extern const float PARTICLE_SPACING;
	extern const float PARTICLE_VOLUME;
	extern const float PARTICLE_MASS;
	extern const float KERNEL_RANGE;
} // namespace Constants

#endif