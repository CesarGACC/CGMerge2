#pragma once

#include <iostream>
#include <math.h>

#include "src/core/objects/Object.h"
#include "src/core/math/Vertex3f.h"
#include "src/core/math/TMatrix.h"
#include "src/core/color/Color.h"
#include "src/core/material/Material.h"


class GSphere : public Object
{
  float radius;
  Vertex3f center;
  Material material;

public:
	GSphere();
  GSphere(const Vertex3f & c, float r, Material & mat);
	~GSphere();

	void applyTransform(const TMatrix & param);

//	Color hitObject
/*
	Implement hitObject function. It must check all faces and find the first
	hitted by the ray; It returns a color.
	Maybe returning the color of the hitted face's material and the point where it were
	hitted will be a better implementation then the caller method will handle
	any illumination issue
*/
	float hitObject(Vertex3f & ray);
  float hitObject(Vertex3f & ray, Vertex3f & normal);
  float hitObject(Vertex3f & ray, Vertex3f & ret_n, Material * & ret_mat);

  void setRadius(float r);
  void setCenter(Vertex3f c);
  void setMaterial(Material & new_mat);

  float getRadius();
  Vertex3f* getCenter();
  Material* getMaterial();

	void print();
};
