/*
 * i-scream central monitoring system
 * http://www.i-scream.org
 * Copyright (C) 2000-2003 i-scream
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include <stdio.h>
#include <statgrab.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
	
	extern char *optarg;
        extern int optind;
        int c;

	int delay = 1;
	user_stat_t *users;

	while ((c = getopt(argc, argv, "d:")) != EOF){
                switch (c){
                        case 'd':
                                delay = atoi(optarg);
                                break;
		}
	}

	if( (users = get_user_stats()) != NULL){
		printf("Users : %s\n", users->name_list);
		printf("Number of users : %d\n", users->num_entries);
	}

	exit(0);
}


