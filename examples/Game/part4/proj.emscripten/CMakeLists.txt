cmake_minimum_required (VERSION 2.6)
project (GamePart4)

add_subdirectory(../../../../ oxygine-framework)
add_definitions(${OXYGINE_DEFINITIONS})
include_directories(${OXYGINE_INCLUDE_DIRS})
link_directories(${OXYGINE_LIBRARY_DIRS})

SET(CMAKE_EXECUTABLE_SUFFIX ".html")
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wno-warn-absolute-paths")

add_executable(GamePart4 ../src/Enemy.cpp ../src/Game.cpp ../src/GameMenu.cpp ../src/GameScene.cpp ../src/Joystick.cpp ../src/MainMenuScene.cpp ../src/MyButton.cpp ../src/Player.cpp ../src/Rocket.cpp ../src/Scene.cpp ../src/Unit.cpp ../src/entry_point.cpp ../src/example.cpp ../src/res.cpp  ../src/Enemy.h ../src/Game.h ../src/GameMenu.h ../src/GameScene.h ../src/Joystick.h ../src/MainMenuScene.h ../src/MyButton.h ../src/Player.h ../src/Rocket.h ../src/Scene.h ../src/Unit.h ../src/example.h ../src/res.h )

set_target_properties(GamePart4
    PROPERTIES 
    LINK_FLAGS "-s WARN_ON_UNDEFINED_SYMBOLS=1 -s -Wno-warn-absolute-paths -s TOTAL_MEMORY=64435456")

target_link_libraries(GamePart4 ${OXYGINE_CORE_LIBS})
em_link_pre_js(GamePart4 ${CMAKE_CURRENT_SOURCE_DIR}/data.js)