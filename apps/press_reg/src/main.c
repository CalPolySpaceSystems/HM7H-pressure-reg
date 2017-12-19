/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <assert.h>
#include <string.h>

#include "sysinit/sysinit.h"
#include "os/os.h"
#include "bsp/bsp.h"

/* Hardare abstraction layer*/
#include "hal/hal_gpio.h"
#include "hal/hal_adc.h"

#ifdef ARCH_sim
#include "mcu/mcu_sim.h"
#endif

static volatile int g_task1_loops;

/* Declare Tasks */
static void get_input(struct os_event *);
static void close_valve(struct os_event *);

/* Struct of scheduled events */
static struct os_event gen_task_ev = {
	.get_input = get_input,
	.close_valve = close_valve,
};

/* Intitialize Tasks */
static void init_tasks(void) {
	os_task_init();
}

/* Task to read input and open the valve */
static void get_input(struct os_event *ev) {

}

/* Task to close the valve after a certain time */
static void close_valve(struct os_event *ev) {

}

/* Run diagnostics and initialize task handler in main */

int main(int argc, char **argv){
    int rc;

#ifdef ARCH_sim
    mcu_sim_parse_args(argc, argv);
#endif

    sysinit();

	init_tasks();

    //g_led_pin = LED_PIN;
    hal_gpio_init_out(LS_PIN, 1);

    while (1) {
        ++g_task1_loops;

        /* Wait one second */
        os_time_delay(1);

        /* Toggle the LED */
        //hal_gpio_toggle(g_led_pin);
		hal_gpio_toggle(LS_PIN);

    }
    assert(0);

    return rc;
}