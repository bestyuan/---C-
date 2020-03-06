file(GLOB MAIN_SRCS
 "*.[hH]"
 "*.[cC]"
 "*.[hc]pp"
 "*.[hc]xx"
 "*.cc")

add_executable(HideDelegate ${MAIN_SRCS})
set_target_properties(HideDelegate PROPERTIES FOLDER "Chapter7")