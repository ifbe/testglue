#include <stdio.h>
#include <string.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

static int add(lua_State* L) 
{
    double op1 = luaL_checknumber(L,1);
    double op2 = luaL_checknumber(L,2);
    lua_pushnumber(L,op1 + op2);
    return 1;
}

static int sub(lua_State* L)
{
    double op1 = luaL_checknumber(L,1);
    double op2 = luaL_checknumber(L,2);
    lua_pushnumber(L,op1 - op2);
    return 1;
}

static luaL_Reg mylibs[] = { 
    {"add", add},
    {"sub", sub},
    {NULL, NULL} 
}; 

LUALIB_API int luaopen_fuck(lua_State* L) 
{
    luaL_newlib(L, mylibs);
    return 1;
}
