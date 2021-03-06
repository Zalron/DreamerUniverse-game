// Comment out this line when using as DLL
#define flecs_systems_civetweb_STATIC
#ifndef FLECS_SYSTEMS_CIVETWEB_H
#define FLECS_SYSTEMS_CIVETWEB_H

/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_SYSTEMS_CIVETWEB_BAKE_CONFIG_H
#define FLECS_SYSTEMS_CIVETWEB_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_components_http.h>

/* Convenience macro for exporting symbols */
#ifndef flecs_systems_civetweb_STATIC
#if flecs_systems_civetweb_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_SYSTEMS_CIVETWEB_API __declspec(dllexport)
#elif flecs_systems_civetweb_EXPORTS
  #define FLECS_SYSTEMS_CIVETWEB_API __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define FLECS_SYSTEMS_CIVETWEB_API __declspec(dllimport)
#else
  #define FLECS_SYSTEMS_CIVETWEB_API
#endif
#else
  #define FLECS_SYSTEMS_CIVETWEB_API
#endif

#endif


#ifdef __cplusplus
extern "C" {
#endif

typedef struct FlecsSystemsCivetweb {
    ECS_DECLARE_ENTITY(CivetServer);
} FlecsSystemsCivetweb;

FLECS_SYSTEMS_CIVETWEB_API
void FlecsSystemsCivetwebImport(
    ecs_world_t *world);

#define FlecsSystemsCivetwebImportHandles(handles)\
    ECS_IMPORT_ENTITY(handles, CivetServer);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#ifndef FLECS_NO_CPP

namespace flecs {
namespace systems {

class civetweb : public FlecsSystemsCivetweb {
public:

    civetweb(flecs::world& world) {
        FlecsSystemsCivetwebImport(world.c_ptr());

        flecs::module<flecs::systems::civetweb>(
            world, "flecs::systems::civetweb");
    }
};

}
}

#endif // FLECS_NO_CPP
#endif // __cplusplus

#endif
