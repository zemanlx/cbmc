/*******************************************************************\

Module: Unwind loops in static initializers

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

#include <goto-programs/goto_functions.h>

#include <util/options.h>
#include <util/symbol_table.h>

#ifndef CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H
#define CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H

void remove_static_init_loops(
  const symbol_tablet &,
  const goto_functionst &,
  optionst &);

#endif // CPROVER_GOTO_PROGRAMS_REMOVE_STATIC_INIT_LOOPS_H
