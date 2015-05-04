#ifndef SPLATT_CPD_H
#define SPLATT_CPD_H

#include "base.h"


/******************************************************************************
 * STRUCTURES
 *****************************************************************************/
typedef struct
{
  /* tensor file */
  char * ifname;

  /* CPD options */
  idx_t rank;
  idx_t niters;
  double tol; /** cease iterations with improvement drops below tol */

  /* dimension of the distribution (used in MPI) */
  idx_t distribution;
  int mpi_dims[MAX_NMODES];

  /* optimizations */
  idx_t nthreads;
  int tile;
} cpd_opts;


/******************************************************************************
 * INCLUDES
 *****************************************************************************/
#include "ftensor.h"
#include "matrix.h"
#include "splatt_mpi.h"


/******************************************************************************
 * PUBLIC FUNCTIONS
 *****************************************************************************/
void cpd(
  ftensor_t ** ft,
  matrix_t ** mats,
  matrix_t ** globmats,
  val_t * const lambda,
  rank_info * const rinfo,
  cpd_opts const * const opts);


#endif
