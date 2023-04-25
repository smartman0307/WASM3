//
//  m3_module.h
//  m3
//
//  Created by Steven Massey on 7/7/19.
//  Copyright © 2019 Steven Massey. All rights reserved.
//

#ifndef m3_module_h
#define m3_module_h

#include "m3_env.h"

M3Result  Module_EnsureMemorySize  (IM3Module i_module, IM3Memory io_memory, m3word_t i_memorySize);

i32 AllocateHeap (M3Memory * io_memory, i32 i_size);


#endif /* m3_module_h */
