// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_PLUGINMANAGEMENT_H
#define NOVELRT_PLUGINMANAGEMENT_H

// PluginManagementDependencies
#include "../Experimental/Graphics/Graphics.h"
#include "../Experimental/Windowing/Windowing.h"

/**
 * @brief The NovelRT engine plugin system for loading modules such as Vulkan, GLFW3, OpenAL, and more.
 */
namespace NovelRT::PluginManagement
{
    class DefaultPluginSelector;
    class IGraphicsPluginProvider;
    class IWindowingPluginProvider;
}

// clang-format off
#include "IGraphicsPluginProvider.h"
#include "IWindowingPluginProvider.h"
#include "TemporaryFnPtrs.h" //TODO: THIS HEADER IS A HACK - DELETE AFTER MVP
#include "DefaultPluginSelector.h"
// clang-format on

#endif // NOVELRT_PLUGINMANAGEMENT_H
