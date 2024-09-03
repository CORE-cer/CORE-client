from conan import ConanFile
from conan.tools.cmake import cmake_layout, CMake, CMakeToolchain, CMakeDeps


class COREClient(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("uwebsockets/20.64.0")
        self.requires("nlohmann_json/3.11.3")

    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()