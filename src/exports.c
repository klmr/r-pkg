#define R_NO_REMAP
#include "Rinternals.h"

SEXP test(SEXP x);

static const R_CallMethodDef methods[] = {
    {"c_test", (DL_FUNC) &test, 1},
    {NULL, NULL, 0}
};

void R_init_pkg(DllInfo* info) {
    R_registerRoutines(info, NULL, methods, NULL, NULL);
    R_useDynamicSymbols(info, FALSE);
    R_forceSymbols(info, TRUE);
}
