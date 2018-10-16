/*
	Meshes Cube
*/

#pragma once

#include <stdint.h>

#include "src/core/objects/Object.h"
#include "src/core/math/Vertex3f.h"
#include "src/core/math/Edge3f.h"
#include "src/core/math/Face3f.h"
#include "src/core/color/Color.h"

class MCube : public Object
{
	Vertex3f vertices[8];
	Edge3f edges[12];
	Face3f faces[12];
public:
	MCube();
	~MCube();
	void applyTransform(const TMatrix & param);

//	Color hitObject
/*
	Implement hitObject function. It must check all faces and find the first
	hitted by the ray; It returns a color.
	Maybe returning the color of the hitted face's material and the point where it were
	hitted will be a better implementation then the caller method will handle
	any illumination issue
*/
	bool hitObject(Vertex3f & ray, Color & col);

	void print();
};
