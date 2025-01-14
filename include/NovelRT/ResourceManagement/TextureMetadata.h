// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_RESOURCEMANAGEMENT_TEXTUREMETADATA_H
#define NOVELRT_RESOURCEMANAGEMENT_TEXTUREMETADATA_H

namespace NovelRT::ResourceManagement
{
    struct TextureMetadata
    {
        std::vector<uint8_t> data;
        uint32_t width;
        uint32_t height;
        size_t pixelCount;
    };
}

#endif // NOVELRT_RESOURCEMANAGEMENT_TEXTUREMETADATA_H
