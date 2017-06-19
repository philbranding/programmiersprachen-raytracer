#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <Shape.hpp>
#include <color.hpp>
#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>




int main(int argc, char *argv[])
{

  return Catch::Session().run(argc, argv);
}
