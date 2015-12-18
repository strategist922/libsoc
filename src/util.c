/* libsoc - Library to handle standardised output files
 * Copyright (C) 2015 Rikard Nordgren
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 * 
 * his library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void *extmalloc(size_t size)
{
    void *memory = malloc(size);

    if (memory == NULL) {
        printf("Out of memory, aborting.");
        abort();
    }

    return memory;
}

char *extstrdup(const char *str)
{
    size_t len = 1 + strlen(str);
    char *p = extmalloc(len);
    memcpy(p, str, len);

    return p;
}
