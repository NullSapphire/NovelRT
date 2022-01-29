// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_ECS_INPUT_INPUTSYSTEM_H
#define NOVELRT_ECS_INPUT_INPUTSYSTEM_H

#ifndef NOVELRT_ECS_INPUT_H
#error NovelRT does not support including types explicitly by default. Please include Ecs.Input.h instead for the Ecs.Input namespace subset.
#endif

namespace NovelRT::Ecs::Input
{
    class InputSystem : public Ecs::IEcsSystem
    {
    private:
        LoggingService _logger;
        std::shared_ptr<NovelRT::Experimental::Input::IInputService> _service;
        std::map<NovelRT::Atom, std::string> _actionMap;

        void AddMapping(std::string name, std::string id, Ecs::Catalogue catalogue);
    public:
        InputSystem(std::shared_ptr<PluginManagement::IWindowingPluginProvider> windowingProvider);
        ~InputSystem() noexcept;

        void Update(Timing::Timestamp delta, Ecs::Catalogue catalogue) final;
        void AddDefaultKBMMapping(Ecs::Catalogue catalogue);
    };
}

#endif // NOVELRT_ECS_INPUT_INPUTSYSTEM_H