#include "Scene.h"

#include "shapes.h"
#include "Light.h"
Scene::Scene(int numShapes, int numLights): numOfShapes(numShapes), m_numberOfLights(numLights)
{

	shapes.reserve(numOfShapes);
	lights = new Light* [m_numberOfLights]{};
}

Scene::~Scene()
{

	for (int i = 0; i < m_numberOfLights; ++i)
	{
		delete lights[i];
		lights[i] = nullptr;
	}
}


