#include "KMiniEngine.h"


class GrassRenderApp : public Application
{
public:
	GrassRenderApp() = default;
	~GrassRenderApp() = default;

};

Application* CreateApplication()
{
	return new GrassRenderApp();
}

void UpdateApplication()
{

}

int main()
{
	return Core::RunEngine();
}


