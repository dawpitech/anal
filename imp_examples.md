@mainpage

# Implementation Guide

## Renderer

Here is an example of a minimal implementation of a renderer.  
It includes the minimal method that should be supported and the shared object entrypoint.

```c++
#include "IRenderer.hpp"

class ExampleRenderer : public anal::IRenderer
{
    public:
        ExampleRenderer() = default;
        ~ExampleRenderer() = default;
      
        ModuleType getModuleType() override { return anal::IModule::ModuleType::RENDERER; }
        ModuleVersion getModuleVersion() override { return anal::IModule::ModuleVersion::V1_0_0; }
      
        class ExampleException : public IRenderer::Exception {};
        void drawSprite(const ISprite& sprite) override {...};
        void drawText(const std::string&, Vector2<int>) override {...};
        void setWindowTitle(const std::string&) override {...};
        void render() override {...};
        std::vector<Event>& getEvents() override {...};
        void clear() override {...};
};

extern "C" std::unique_ptr<anal::IRenderer> uwu_entrypoint_renderer() { return std::make_unique<ExampleRenderer>(); }
extern "C" std::unique_ptr<anal::IModule> uwu_entrypoint_module() { return std::make_unique<ExampleRenderer>(); }
```
