/** @file
 * @version 1.0.0
 * @author KonnorFrik
 */

#ifndef __CMATRIX_H__
#define __CMATRIX_H__

#define SUCCESS 1
#define FAILURE 0

#define EPS 1e-7

/*
*    _      _      _      _      _      _      _      _      _      _      _      _      _      _   
*  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_ 
* (_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)
*  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_) 
*    _                                                                                          _   
*  _( )_     _______   ,---.    ,---.   ____   ,---------. .-------.   .-./`) _____     __    _( )_ 
* (_ o _)   /   __  \  |    \  /    | .'  __ `.\          \|  _ _   \  \ .-.')\   _\   /  /  (_ o _)
*  (_,_)   | ,_/  \__) |  ,  \/  ,  |/   '  \  \`--.  ,---'| ( ' )  |  / `-' \.-./ ). /  '    (_,_) 
*    _   ,-./  )       |  |\_   /|  ||___|  /  |   |   \   |(_ o _) /   `-'`"`\ '_ .') .'       _   
*  _( )_ \  '_ '`)     |  _( )_/ |  |   _.-`   |   :_ _:   | (_,_).' __ .---.(_ (_) _) '      _( )_ 
* (_ o _) > (_)  )  __ | (_ o _) |  |.'   _    |   (_I_)   |  |\ \  |  ||   |  /    \   \    (_ o _)
*  (_,_) (  .  .-'_/  )|  (_,_)  |  ||  _( )_  |  (_(=)_)  |  | \ `'   /|   |  `-'`-'    \    (_,_) 
*    _    `-'`-'     / |  |      |  |\ (_ o _) /   (_I_)   |  |  \    / |   | /  /   \    \     _   
*  _( )_    `._____.'  '--'      '--' '.(_,_).'    '---'   ''-'   `'-'  '---''--'     '----'  _( )_ 
* (_ o _)                                                                                    (_ o _)
*  (_,_)                                                                                      (_,_) 
*    _      _      _      _      _      _      _      _      _      _      _      _      _      _   
*  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_ 
* (_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)
*  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_) 
*/


/**
 * @brief Matrix type for use
 */
typedef struct matrix_struct {
  double** matrix;
  int rows;     ///< How many rows in matrix
  int columns;  ///< How many columns in matrix
} cmatrix;

/// @brief Status codes for all functions
enum return_codes_ {
  OK = 0,      ///< Function end successfully
  ERROR,       ///< Invalid matrix, argument
  CALC_ERROR,  ///< Calculation can't be produced
};

int cmatrix_create(int rows, int columns, cmatrix* result);
void cmatrix_remove(cmatrix* a);

int cmatrix_eq(cmatrix* a, cmatrix* b);
int cmatrix_sum(cmatrix* a, cmatrix* b, cmatrix* result);
int cmatrix_sub(cmatrix* a, cmatrix* b, cmatrix* result);
int cmatrix_mult_number(cmatrix* a, double number, cmatrix* result);
int cmatrix_mult(cmatrix* a, cmatrix* b, cmatrix* result);

int cmatrix_transpose(cmatrix* a, cmatrix* result);

int cmatrix_minor_matrix(cmatrix* a, int row, int column, cmatrix* result);
int cmatrix_minor_elem(cmatrix* a, int row, int col, double* res);
int cmatrix_matrix_minor(cmatrix* a, cmatrix* result);

int cmatrix_calc_complements(cmatrix* a, cmatrix* result);
int cmatrix_determinant(cmatrix* a, double* result);
int cmatrix_inverse(cmatrix* a, cmatrix* result);

#endif
