#ifndef HERMANN_H
#define HERMANN_H

#include <ruby.h>

#include <ctype.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <syslog.h>
#include <sys/time.h>
#include <errno.h>

#include <librdkafka/rdkafka.h>

// Holds the defined Ruby module for Hermann
static VALUE m_hermann;

// From rdkafka_example.c
static int run = 1;
static rd_kafka_t *rk;
static int exit_eof = 0;
static int quiet = 0;
static 	enum {
	OUTPUT_HEXDUMP,
	OUTPUT_RAW,
} output = OUTPUT_HEXDUMP;


#endif


