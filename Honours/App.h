#pragma once

#include "OGRE/Bites/OgreApplicationContext.h"
#include "OGRE/Bites/OgreInput.h"


class App : public OgreBites::ApplicationContext, public OgreBites::InputListener
{
public:
	App();
	~App();

	void Run();

private:
	int foo;
};

