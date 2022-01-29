// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_EXPERIMENTAL_INPUT_GLFW_GLFWINPUTPLUGINPROVIDER_H
#define NOVELRT_EXPERIMENTAL_INPUT_GLFW_GLFWINPUTPLUGINPROVIDER_H

#ifndef NOVELRT_EXPERIMENTAL_INPUT_GLFW_H
#error NovelRT does not support including types explicitly by default. Please include Input.Glfw.h instead for the Input::Glfw namespace subset.
#endif

namespace NovelRT::Experimental::Input::Glfw
{
    class GlfwInputPluginProvider final : public PluginManagement::IInputPluginProvider
    {
    private:
        std::shared_ptr<GlfwInputService> _inputService;

        [[nodiscard]] GlfwInputService* GetInputServiceInternal() override;

    public:
        GlfwInputPluginProvider() noexcept;

        [[nodiscard]] inline std::shared_ptr<GlfwInputService> GetInputService()
        {
            return std::dynamic_pointer_cast<GlfwInputService>(GetInputServiceInternal()->shared_from_this());
        }
    };
}

#endif // NOVELRT_EXPERIMENTAL_INPUT_GLFW_GLFWINPUTPLUGINPROVIDER_H