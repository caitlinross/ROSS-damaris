/**
 * @file analysis-tasks.h
 *
 * Definitions of functions to be used by Argobots work units.
 */

#ifndef ANALYSIS_TASKS_H
#define ANALYSIS_TASKS_H

#include <damaris/buffer/DataSpace.hpp>
#include <damaris/buffer/Buffer.hpp>
#include <abt.h>

#ifdef __cplusplus
extern "C" {
#endif

struct initial_task_args
{
    int step;
    int mode;
};

struct forward_task_args
{
    double lower; // exclusive
    double last_gvt; // inclusive
};

struct feature_extraction_args
{
    double ts;
    int num_steps;
    int mode;
};

struct lp_analysis_args
{
    double ts;
};

void init_analysis_tasks(void);

/**
 * @brief Adds Damaris DataSpaces to the DataManager.
 */
void initial_data_processing(void *arguments);

void remove_invalid_data(void *arguments);
//void update_committed_data(void *arguments);
void forward_vts_task(void* arguments);

void sample_processing_task(void *arguments);

void feature_extraction_task(void *arguments);
void aggregation_task(void *arguments);
void hypothesis_tests_task(void *arguments);

void lp_analysis_task(void *arguments);

void get_reduction_sizes(size_t* raw, size_t* reduced);

#ifdef __cplusplus
} // end extern "C"
#endif

#endif // end ANALYSIS_TASKS_H
