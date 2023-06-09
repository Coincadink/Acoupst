#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class VulkanApp
{
public:
	void run();

private:
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();

private:
	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;

	GLFWwindow* window;
};