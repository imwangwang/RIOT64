/*
 * Copyright (C) 2017 JP Bonn
 * Copyright (C) 2019 FZI Forschungszentrum Informatik
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     cpu_riscv_common
 * @ingroup     cpu
 * @{
 *
 * @file
 * @brief           Functions to read CPU cycle counter
 *
 * @author          JP Bonn
 * @}
 */

#ifndef CPUCYCLE_H
#define CPUCYCLE_H

#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   Returns a count of the number of clock cycles executed by the
 *          processor core on which the hart is running from an arbitrary
 *          start time in the past.
 */
uint64_t get_cycle_count(void);


#ifdef __cplusplus
}
#endif

#endif /* CPUCYCLE_H */
/** @} */
