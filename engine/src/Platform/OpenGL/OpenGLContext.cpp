#include "OpenGLContext.h"

namespace Untitled {
  void OpenGLContext::init()
  {

  }

  std::shared_ptr<std::vector<WindowHint>> OpenGLContext::getWindowHints()
  {
    auto hints = std::make_shared<std::vector<WindowHint>>();

    hints->emplace_back(WindowHint{GLFW_CLIENT_API, GLFW_OPENGL_API});
    hints->emplace_back(WindowHint{GLFW_CONTEXT_VERSION_MAJOR, 3});
    hints->emplace_back(WindowHint{GLFW_CONTEXT_VERSION_MINOR, 3});

    return hints;
  }
}