add_library(app app.cc)
target_include_directories(app PUBLIC
                          "${CMAKE_CURRENT_LIST_DIR}")
# ${CMAKE_CURRENT_LIST_DIR} dir. de este CMakeLisis.txt

add_executable(app_main app_main.cc)
target_link_libraries(app_main app market person client seller product basket)
