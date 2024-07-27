/** @file */

#ifndef __OTHER_H__
#define __OTHER_H__

#include "../cmatrix.h"

int cmatrix_is_valid(const cmatrix* obj);
int cmatrix_validate_all(const cmatrix* a, const cmatrix* b, const cmatrix* result);
void cmatrix_print(cmatrix* obj, const char* fmt);

#endif  // __OTHER_H__
