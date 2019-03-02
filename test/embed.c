#include <stdlib.h>
#include <stdio.h>

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include "../debugger.h"

int main(int argc, char *argv[]){
	lua_State *lua = luaL_newstate();
	luaL_openlibs(lua);
	dbg_setup_default(lua);
	
	luaL_loadfile(lua, "embed-test.lua");
	dbg_pcall(lua, 0, 0, 0);
	
	printf("COMPLETE\n");
	return EXIT_SUCCESS;
}
