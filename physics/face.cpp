#include "face.h"

Face::Face(int *vals) {
	ind.xpos = vals[0];
	ind.ypos = vals[1];
	ind.zpos = vals[2];
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

void Face::calculateNorm(Array<Vertex*> *verts) {
	// calculates the Face normal and also updates the vertex normals
	// for all the vertices that make up the face
	Vec3 a = verts->get(ind.xpos)->getPos();
	Vec3 b = verts->get(ind.ypos)->getPos();
	Vec3 c = verts->get(ind.zpos)->getPos();
	b = b-a;
	c = c-a;
	b = b/c;
	b.normalize();
	norm.xpos = b.xpos;
	norm.ypos = b.ypos;
	norm.zpos = b.zpos;
	verts->get(ind.xpos)->addToNorm(norm);
	verts->get(ind.ypos)->addToNorm(norm);
	verts->get(ind.zpos)->addToNorm(norm);
}

void Face::render(AttributeNode *node,Array<Vertex*> *verts) {
	// Renders the faace based on the Shading mode
	if(node == 0x0) {
		// draw solid nonshaded mode
	} else {
		switch(node->getRenderingMode()) {
			case Point: {
				// to be implemented
				break;
			}
			case Wireframe: {
				// to be implemented
				break;
			}
			case Solid: {
				// to be implemented
				break;
			}
			case Shaded: {
				// to be implemented
				break;
			}
			default: {
				// TODO :: report an error
				break;
			}
		}

		switch(node->getNormalMode()) {
			case F: {
				// to be implemented
				break;
			}
			case V: {
				// to be implemented
				break;
			}
			case None: {
				// does nothing
				break;
			}
			default: {
				// TODO :: report an error
				break;
			}
		}
	}
}
