#pragma once

#ifdef PN_PLATFORM_WINDOWS
	
	extern Pine::Application* Pine::CreateApplication();

	int main(int argc, char** argv) // win main
	{
		Pine::Log::Init();
		PN_CORE_WARN("Initialized Log");
		int a = 5;
		PN_INFO("Hello! var={0}", a);
		printf("Application is running");
		auto app = Pine::CreateApplication();
		app->Run();
		delete app;
	}

#endif 