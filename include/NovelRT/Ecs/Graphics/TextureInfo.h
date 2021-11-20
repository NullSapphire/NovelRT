// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_ECS_GRAPHICS_TEXTUREINFO_H
#define NOVELRT_ECS_GRAPHICS_TEXTUREINFO_H

#ifndef NOVELRT_ECS_H
#error NovelRT does not support including types explicitly by default. Please include Ecs.h instead for the Ecs namespace subset.
#endif

namespace NovelRT::Ecs::Graphics
{
    struct TextureInfo
    {
        Experimental::Graphics::GraphicsMemoryRegion<Experimental::Graphics::GraphicsResource> gpuTextureRegion = nullptr;
        std::string textureName = "";
        Atom ecsId = 0;
    };
}

#endif // NOVELRT_ECS_GRAPHICS_TEXTUREINFO_H