#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

static int l_plus(lua_State* L)
{
	lua_Integer a = luaL_checkinteger(L, 1);
	lua_Integer b = luaL_checkinteger(L, 2);
	lua_pushinteger(L, a+b);
	return 1;
}
int main()
{
	lua_State *L = luaL_newstate();
	luaL_openlibs(L);

	lua_register(L, "myplus", l_plus);
	luaL_dofile(L,"1.lua");

	lua_close(L);
	return 0;
}


