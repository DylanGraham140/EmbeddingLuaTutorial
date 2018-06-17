#include <cstdio>
#include "lua.hpp"

int main()
{
	lua_State* L = luaL_newstate();
	luaL_dostring(L, "x = 47");
	lua_getglobal(L, "x");
	lua_Number x = lua_tonumber(L, 1);
	printf("lua says x = %d\n", (int)x);
	lua_close(L);
}