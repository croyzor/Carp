#include <stdio.h>
#include <string.h>
#include "mini.h"

int main() {
  env_new_global();
  eval_text(global_env, "(load-lisp (str (getenv \"CARP_DIR\") \"lisp/boot.carp\"))", false);  
  repl(global_env);  
  assert(obj_total == 0);
}