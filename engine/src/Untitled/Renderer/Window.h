#pragma once

#include <pch.h>

#include "../Core/Core.h"
#include "RenderTarget.h"
#include "RendererAPI.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Untitled {
  struct UT_API WindowHint {
    int hint;
    int value;
  };


  class UT_API Window : RenderTarget {
  public:
    Window();
    ~Window();

  private:
    static int WINDOW_COUNT;
    static void glfwErrorCallback(int error, const char* description);

    GLFWwindow* windowHandle;
  };
}