#!/usr/bin/env python
import glob, os, re, shutil

def convert_to_header(source_md_file):
	file_basename = os.path.splitext (os.path.basename (source_md_file))[0]
	output_path = os.path.join ('headers', file_basename + '.h')
	dir_name = os.path.dirname (output_path)
	if not os.path.exists(dir_name):
		os.makedirs(dir_name)
	in_quote = False
	with open (source_md_file, 'r') as source_f:
		with open (output_path, 'w') as dest_f:
			dest_f.write ('''#pragma once
#include "common_includes.h"
''')
			if file_basename != 'enumerates':
				dest_f.write ('#include "enumerates.h"\n')
				if file_basename != 'structures':
					dest_f.write ('#include "structures.h"\n')
			dest_f.write('''/**
 * @file {0}
 * @brief {0}
 *
 * @ingroup sanctuary_notes
 * @{{
 */

'''.format (output_path))
			for line in source_f:
				if line[:-1] == '```c':
					in_quote = True
				elif line[:-1] == '```':
					in_quote = False
					dest_f.write ('\n')
				elif in_quote:
					if line.startswith ('//'):
						line = '/**{}*/'.format (line[2:-1]) + '\n'
						dest_f.write (line)
					else:
						m = re.match ('(.*) //(.*)', line)
						if m:
							dest_f.write ('/**{}*/\n'.format(m.group(2)))
							dest_f.write ('{}\n'.format(m.group(1)))
						else:
							dest_f.write (line)
			dest_f.write ('/** @} */')

shutil.rmtree('headers')
file_masks = ['structures.md', 'enumerates.md', 'functions/*.md']
for mask in file_masks:
	for file in glob.glob(mask):
		convert_to_header (file)
with open(os.path.join ('headers', 'common_includes.h'), 'w') as dest_f:
	dest_f.write ('''#pragma once
#include <stdint.h>

typedef int8_t bool8_t;
typedef int16_t bool16_t;
typedef int32_t bool32_t;
''')
