/*
 *    salloc.c: malloc style functions on top of SLAB allocator
 *    Copyright (C) 2014  Gonzalo J. Carracedo
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>
 */


#ifndef _MM_SALLOC_H
#define _MM_SALLOC_H

void *__salloc (size_t, const char *);
void __sfree (void *);

void *salloc_task (size_t);
void sfree_task (void *);

void *salloc_irq (size_t);
void sfree_irq (void *);

void *salloc (size_t);
void sfree (void *);

#endif /* _MM_SALLOC_H */
