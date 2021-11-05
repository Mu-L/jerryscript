/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * %TypedArrayPrototype% description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

#if JERRY_BUILTIN_TYPEDARRAY

/* ES2015 22.2.3.4 */
OBJECT_VALUE (LIT_MAGIC_STRING_CONSTRUCTOR, ECMA_BUILTIN_ID_TYPEDARRAY, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* Readonly accessor properties */
/* ES2015 22.2.3.1 */
ACCESSOR_READ_ONLY (LIT_MAGIC_STRING_BUFFER,
                    ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_BUFFER_GETTER,
                    ECMA_PROPERTY_FLAG_CONFIGURABLE)
/* ES2015 22.2.3.2 */
ACCESSOR_READ_ONLY (LIT_MAGIC_STRING_BYTE_LENGTH_UL,
                    ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_BYTELENGTH_GETTER,
                    ECMA_PROPERTY_FLAG_CONFIGURABLE)
/* ES2015 22.2.3.3 */
ACCESSOR_READ_ONLY (LIT_MAGIC_STRING_BYTE_OFFSET_UL,
                    ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_BYTEOFFSET_GETTER,
                    ECMA_PROPERTY_FLAG_CONFIGURABLE)

/* ES2015 22.2.3.17 */
ACCESSOR_READ_ONLY (LIT_MAGIC_STRING_LENGTH,
                    ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_LENGTH_GETTER,
                    ECMA_PROPERTY_FLAG_CONFIGURABLE)

/* ECMA-262 v6, 23.1.3.13 */
ACCESSOR_READ_ONLY (LIT_GLOBAL_SYMBOL_TO_STRING_TAG,
                    ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_TO_STRING_TAG_GETTER,
                    ECMA_PROPERTY_FLAG_CONFIGURABLE)

/* Routine properties:
 *  (property name, C routine name, arguments number or NON_FIXED, value of the routine's length property) */
ROUTINE (LIT_MAGIC_STRING_COPY_WITHIN, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_COPY_WITHIN, NON_FIXED, 2)
ROUTINE (LIT_MAGIC_STRING_ENTRIES, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_ENTRIES, 0, 0)
ROUTINE (LIT_MAGIC_STRING_EVERY, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_EVERY, 2, 1)
ROUTINE (LIT_MAGIC_STRING_FILL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_FILL, 3, 1)
ROUTINE (LIT_MAGIC_STRING_FILTER, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_FILTER, 2, 1)
ROUTINE (LIT_MAGIC_STRING_FIND, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_FIND, 2, 1)
ROUTINE (LIT_MAGIC_STRING_FIND_INDEX, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_FIND_INDEX, 2, 1)
ROUTINE (LIT_MAGIC_STRING_FOR_EACH_UL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_FOR_EACH, 2, 1)
ROUTINE (LIT_MAGIC_STRING_INCLUDES, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_INCLUDES, NON_FIXED, 1)
ROUTINE (LIT_MAGIC_STRING_AT, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_AT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_INDEX_OF_UL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_INDEX_OF, NON_FIXED, 1)
ROUTINE (LIT_MAGIC_STRING_JOIN, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_JOIN, 1, 1)
ROUTINE (LIT_MAGIC_STRING_KEYS, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_KEYS, 0, 0)
ROUTINE (LIT_MAGIC_STRING_LAST_INDEX_OF_UL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_LAST_INDEX_OF, NON_FIXED, 1)
ROUTINE (LIT_MAGIC_STRING_MAP, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_MAP, 2, 1)
ROUTINE (LIT_MAGIC_STRING_REDUCE, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_REDUCE, 2, 1)
ROUTINE (LIT_MAGIC_STRING_REDUCE_RIGHT_UL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_REDUCE_RIGHT, 2, 1)
ROUTINE (LIT_MAGIC_STRING_REVERSE, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_REVERSE, 0, 0)
ROUTINE (LIT_MAGIC_STRING_SET, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_SET, 2, 1)
ROUTINE (LIT_MAGIC_STRING_SLICE, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_SLICE, NON_FIXED, 2)
ROUTINE (LIT_MAGIC_STRING_SOME, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_SOME, 2, 1)
ROUTINE (LIT_MAGIC_STRING_SORT, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_SORT, 1, 1)
ROUTINE (LIT_MAGIC_STRING_SUBARRAY, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_SUBARRAY, 2, 2)
ROUTINE (LIT_MAGIC_STRING_TO_LOCALE_STRING_UL, ECMA_TYPEDARRAY_PROTOTYPE_ROUTINE_TO_LOCALE_STRING, 0, 0)
INTRINSIC_PROPERTY (LIT_MAGIC_STRING_TO_STRING_UL, LIT_MAGIC_STRING_TO_STRING_UL, ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
INTRINSIC_PROPERTY (LIT_MAGIC_STRING_VALUES,
                    LIT_INTERNAL_MAGIC_STRING_TYPEDARRAY_PROTOTYPE_VALUES,
                    ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
INTRINSIC_PROPERTY (LIT_GLOBAL_SYMBOL_ITERATOR,
                    LIT_INTERNAL_MAGIC_STRING_TYPEDARRAY_PROTOTYPE_VALUES,
                    ECMA_PROPERTY_CONFIGURABLE_WRITABLE)
#endif /* JERRY_BUILTIN_TYPEDARRAY */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
