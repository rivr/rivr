/* Copyright (c) 2014, Rivr 2.0 Developers */
/* See LICENSE for licensing information */

/**
 * \file rivrcoin.h
 * \brief Headers for rivrcoin.cpp
 **/

#ifndef TOR_RIVRCOIN_H
#define TOR_RIVRCOIN_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* rivrcoin_tor_data_directory(
    );

    char const* rivrcoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

