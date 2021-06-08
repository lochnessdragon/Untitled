#include "Window.h"
#include <stdlib.h>

#include "GraphicsContext.h"

namespace Untitled {
  Window::WINDOW_COUNT = 0;

  Window::Window()
  {
    glfwSetErrorCallback(glfwErrorCallback);

    if (!glfwInit()) {
      UT_CORE_CRITICAL("Could not initialize GLFW! Aborting!");
      exit(1); // No use continuing if we can't even initialize a display
    }

    // set up window hints
    glfwDefaultWindowHints();
    std::shared_ptr<GraphicsContext> context = GraphicsContext::create();
    
    auto contextHints = context.getWindowHints();

    for(WindowHint hint : hints) {
      glfwSetWindowHint(hint.hint, hint.value);
    }

    windowHandle = glfwCreateWindow(640, 480, "Hello GLFW!", NULL, NULL);
    if(!window) 
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
}