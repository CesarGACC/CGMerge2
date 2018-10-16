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

class MTriangle : public Object
{
  Vertex3f vertices[3];
  Edge3f edges[3];
  Face3f faces[1];
public:
  MTriangle();
  ~MTriangle();
  void applyTransform(const TMatrix & param);

  bool hitObject(Vertex3f & ray, Color & col);
  void print();

};
