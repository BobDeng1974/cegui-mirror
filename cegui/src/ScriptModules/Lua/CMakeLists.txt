set( CEGUI_TARGET_NAME ${CEGUI_LUA_SCRIPTMODULE_LIBNAME} )

cegui_gather_files()
cegui_add_library(${CEGUI_TARGET_NAME} CORE_SOURCE_FILES CORE_HEADER_FILES)
cegui_add_dependency(${CEGUI_TARGET_NAME} TOLUAPP PRIVATE TRUE)
cegui_add_dependency(${CEGUI_TARGET_NAME} LUA51 PRIVATE TRUE)

cegui_target_link_libraries(${CEGUI_TARGET_NAME} ${CEGUI_BASE_LIBNAME})

