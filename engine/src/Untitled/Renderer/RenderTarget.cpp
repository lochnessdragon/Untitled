#include "RenderTarget.h"
#include "Window.h"

namespace Untitled {
  std::shared_ptr<RenderTarget> RenderTarget::create(RenderTargetProps properties) 
  {
    return std::make_shared<Window>(properties);
  }
}