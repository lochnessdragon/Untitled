#include "Window.h"
#include <stdlib.h>

#include "GraphicsContext.h"

namespace Untitled {
  int Window::WINDOW_COUNT = 0;

  Window::Window(RenderTargetProps properties)
  {
    glfwSetErrorCallback(glfwErrorCallback);

    if (!glfwInit()) {
      UT_CORE_CRITICAL("Could not initialize GLFW! Aborting!");
      exit(1); // No use continuing if we can't even initialize a display
    }

    // set up window hints
    glfwDefaultWindowHints();
    std::shared_ptr<GraphicsContext> context = GraphicsContext::create();
    
    auto hints = context->getWindowHints();

    //hints->emplace_back({GLFW_});

    for(WindowHint hint : *hints) {
      //glfwWindowHint(hint.hint, hint.value);
    }

    windowHandle = glfwCreateWindow(properties.width, properties.height, "Hello GLFW!", NULL, NULL);
    if(!windowHandle) 
    {
      UT_CORE_CRITICAL("Failed to create window! Aborting!");
      exit(1);
    }

    WINDOW_COUNT++;
  }

  Window::~Window() 
  {
    glfwDestroyWindow(windowHandle);

    WINDOW_COUNT--;

    if(WINDOW_COUNT == 0)
      glfwTerminate();
  }

  void Window::glfwErrorCallback(int error, const char* description) 
  {
    UT_CORE_CRITICAL("[GLFW] Error #: {} Description: {}", error, description);
  }

  void Window::bind()
  {

  }

  glm::vec2 Window::getSize() 
  {
    int width, height = 0;
    glfwGetWindowSize(windowHandle, &width, &height);

    return {width, height};
  }
}