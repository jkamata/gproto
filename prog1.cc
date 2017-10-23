// Begin "prog1.cc"
// C++ Program 1

#include <iostream>
#include <lua.hpp>

using namespace std;

int main(int argc, char **argv)
{
  /* Luaのステートオブジェクトの作成 */
  lua_State *lua = luaL_newstate();

  /* Luaのライブラリの読込み */
  luaL_openlibs(lua);

  /* Luaのスクリプトの実行 */
  luaL_dofile(lua, "hello.lua");

  /* Luaのステートオブジェクトの開放 */
  lua_close(lua);

  return 0;
}
