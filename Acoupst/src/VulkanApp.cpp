#include "VulkanApp.h"

void VulkanApp::run()
{
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void VulkanApp::initWindow()
{
	glfwInit();

	glfwWindowHint(
		GLFW_CLIENT_API,
		GLFW_NO_API
	);
	glfwWindowHint(
		GLFW_RESIZABLE,
		GLFW_FALSE
	);

	window = glfwCreateWindow(WIDTH, HEIGHT, "Acoupst", nullptr, nullptr);
}

void VulkanApp::initVulkan()
{

}

void VulkanApp::mainLoop()
{
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
}

void VulkanApp::cleanup()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}