#ifndef MAIN_H
#define MAIN_H

#include "pdf.h"

typedef struct {
	const unsigned char *payload;
	size_t payload_length;
} page_count_input;

typedef struct {
	int count;
	char *error;
} page_count_output;

typedef struct {
	int page;
	int width;
	float scale;
	const unsigned char *payload;
	size_t payload_length;
} save_to_png_input;

typedef struct {
	char *data;
	size_t len;
	char *error;
} save_to_png_output;

void init(size_t lock_quantity);
page_count_output *page_count(page_count_input *input);
save_to_png_output *save_to_png(save_to_png_input *input);

#endif