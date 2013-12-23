

set(REMOTE_CONTROL_SRCS main.cc color.cc pixel.cc utils.cc image.cc)
set(REMOTE_CONTROL_HDRS color.h pixel.h utils.h image.h)
add_executable(app ${REMOTE_CONTROL_SRCS} ${REMOTE_CONTROL_HDRS})

install(TARGETS app RUNTIME DESTINATION bin)
