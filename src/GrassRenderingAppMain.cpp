#include "KMiniEngine.h"


class GrassRenderApp : public Application
{
public:
	GrassRenderApp() = default;
	~GrassRenderApp() = default;

	void Run() override
	{
		while (true)
		{
		}
	}
};

Application* CreateApplication()
{
	return new GrassRenderApp();
}

int main()
{
	return Core::RunEngine();
}


