#ifndef __GEOMNODE_H__
#define __GEOMNODE_H__

#include "../physics/trimesh.h"
#include "scenenode.h"
#include "traversedata.h"

//class SceneNode;

class GeomNode : public SceneNode {
private:
	TriMesh *mesh;
public:
	GeomNode();
	GeomNode(TriMesh *shape,SceneNode* parent);
	GeomNode(TriMesh *shape);
	~GeomNode();
	virtual void traverse(TraverseData *data);
	virtual void print();
};

#endif
