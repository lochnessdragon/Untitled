#include "VulkanContext.h"

namespace Untitled {
  void VulkanContext::init()
  {

  }

  std::shared_ptr<std::vector<WindowHint>> VulkanContext::getWindowHints()
  {
    auto hints = std::make_shared<std::vector<WindowHint>>();

    hints->emplace_back(WindowHint{GLFW_CLIENT_API, GLFW_NO_API});

    return hints;
  }
}