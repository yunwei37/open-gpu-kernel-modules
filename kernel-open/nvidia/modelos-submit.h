/* SPDX-License-Identifier: MIT */
#ifndef MODELOS_SUBMIT_H
#define MODELOS_SUBMIT_H

/* Built-in kernel entry. Zero means all GPU outputs, completions, ring wrap
 * and cleanup passed. -ENODEV means no selected GPU. A timeout/failed drain
 * retains the RM client and DMA buffers until the owning guest is reset.
 * This is the restricted SM120 store test, not a general CUDA runtime.
 */
int modelos_nv_test_run(unsigned int gpu_index);
#ifdef MODELOS_CAPTURE_PRODUCER
/* Offline input production only: idle native context, explicit arenas, no GPU
 * kernel launch. A success holds the RM client until its producer VM exits. */
int modelos_nv_capture_run(unsigned int gpu_index);
#endif

#endif
