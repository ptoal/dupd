
/*
 * DO NOT EDIT THIS FILE BY HAND!
 *
 * All changes will be lost when file gets regenerated.
 *
 * Generated by optgen 0.1 from config file "options.conf"
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include "optgen.h"
#include "main_opt.h"

char * numstring[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

// For each option, list the commands which accept it
int option_nodb[] = { 1 };
int option_path[] = { 1, 4, 5, 6 };
int option_firstblocks[] = { 1 };
int option_firstblocksize[] = { 1 };
int option_intblocks[] = { 1 };
int option_blocksize[] = { 1 };
int option_skip_two[] = { 1 };
int option_skip_three[] = { 1 };
int option_file_count[] = { 1 };
int option_avg_size[] = { 1 };
int option_uniques[] = { 1 };
int option_stats_file[] = { 1 };
int option_minsize[] = { 1, 2 };
int option_pathsep[] = { 1 };
int option_cut[] = { 2, 3, 4, 5, 6 };
int option_file[] = { 3 };
int option_exclude_path[] = { 3, 4, 5, 6 };
int option_link[] = { 7 };
int option_hardlink[] = { 7 };
int option_verbose[] = { 12 };
int option_quiet[] = { 12 };
int option_db[] = { 12 };
int option_no_unique[] = { 12 };
int option_help[] = { 12 };

int optgen_parse(int argc, char * argv[], int * command, char * options[])
{
  int i;
  int pos;

  *command = OPTGEN_NO_COMMAND;

  for (i = 0; i < COUNT_OPTIONS; i++) {
    options[i] = NULL;
  }

  if (argc < 2) {
    return OPTGEN_NONE;
  }

  // Check if the first argument is a recognized command
  int l = strlen(argv[1]);

  if (l == 4 && !strncmp("scan", argv[1], 4)) {
    *command = 1;
    goto OPTS;
  }
  if (l == 6 && !strncmp("report", argv[1], 6)) {
    *command = 2;
    goto OPTS;
  }
  if (l == 4 && !strncmp("file", argv[1], 4)) {
    *command = 3;
    goto OPTS;
  }
  if (l == 7 && !strncmp("uniques", argv[1], 7)) {
    *command = 4;
    goto OPTS;
  }
  if (l == 4 && !strncmp("dups", argv[1], 4)) {
    *command = 5;
    goto OPTS;
  }
  if (l == 2 && !strncmp("ls", argv[1], 2)) {
    *command = 6;
    goto OPTS;
  }
  if (l == 4 && !strncmp("rmsh", argv[1], 4)) {
    *command = 7;
    goto OPTS;
  }
  if (l == 4 && !strncmp("help", argv[1], 4)) {
    *command = 8;
    goto OPTS;
  }
  if (l == 5 && !strncmp("usage", argv[1], 5)) {
    *command = 9;
    goto OPTS;
  }
  if (l == 7 && !strncmp("license", argv[1], 7)) {
    *command = 10;
    goto OPTS;
  }
  if (l == 7 && !strncmp("version", argv[1], 7)) {
    *command = 11;
    goto OPTS;
  }

 OPTS:

  pos = *command == OPTGEN_NO_COMMAND ? 1 : 2;

  while (pos < argc) {
    l = strlen(argv[pos]);

    if ((l == 6 && !strncmp("--nodb", argv[pos], 6))) {
      if (options[0] == NULL) {
        options[0] = numstring[0];
      } else {
        options[0] = numstring[atoi(options[0])];
      }
      pos++;
      // strict_options: is nodb allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_nodb) / sizeof(option_nodb)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_nodb[cc] == *command) { ok = 1; }
        if (option_nodb[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'nodb' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--path", argv[pos], 6))) {
      options[1] = argv[pos+1];
      pos += 2;
      // strict_options: is path allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_path) / sizeof(option_path)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_path[cc] == *command) { ok = 1; }
        if (option_path[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'path' not compatible with given command\n");
        exit(1);
      }
      // callback configured for this option
      int rv = opt_add_path(options[1], *command);
      if (rv != OPTGEN_CALLBACK_OK) {
        printf("error: problem handling option 'path'\n");
        exit(1);
      }

      continue;
    }
    if ((l == 13 && !strncmp("--firstblocks", argv[pos], 13))) {
      options[2] = argv[pos+1];
      pos += 2;
      // strict_options: is firstblocks allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_firstblocks) / sizeof(option_firstblocks)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_firstblocks[cc] == *command) { ok = 1; }
        if (option_firstblocks[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'firstblocks' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 16 && !strncmp("--firstblocksize", argv[pos], 16))) {
      options[3] = argv[pos+1];
      pos += 2;
      // strict_options: is firstblocksize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_firstblocksize) / sizeof(option_firstblocksize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_firstblocksize[cc] == *command) { ok = 1; }
        if (option_firstblocksize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'firstblocksize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 11 && !strncmp("--intblocks", argv[pos], 11))) {
      options[4] = argv[pos+1];
      pos += 2;
      // strict_options: is intblocks allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_intblocks) / sizeof(option_intblocks)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_intblocks[cc] == *command) { ok = 1; }
        if (option_intblocks[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'intblocks' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 11 && !strncmp("--blocksize", argv[pos], 11))) {
      options[5] = argv[pos+1];
      pos += 2;
      // strict_options: is blocksize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_blocksize) / sizeof(option_blocksize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_blocksize[cc] == *command) { ok = 1; }
        if (option_blocksize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'blocksize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--skip-two", argv[pos], 10))) {
      if (options[6] == NULL) {
        options[6] = numstring[0];
      } else {
        options[6] = numstring[atoi(options[6])];
      }
      pos++;
      // strict_options: is skip_two allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_skip_two) / sizeof(option_skip_two)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_skip_two[cc] == *command) { ok = 1; }
        if (option_skip_two[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'skip_two' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 12 && !strncmp("--skip-three", argv[pos], 12))) {
      if (options[7] == NULL) {
        options[7] = numstring[0];
      } else {
        options[7] = numstring[atoi(options[7])];
      }
      pos++;
      // strict_options: is skip_three allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_skip_three) / sizeof(option_skip_three)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_skip_three[cc] == *command) { ok = 1; }
        if (option_skip_three[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'skip_three' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 12 && !strncmp("--file-count", argv[pos], 12))) {
      if (options[8] == NULL) {
        options[8] = numstring[0];
      } else {
        options[8] = numstring[atoi(options[8])];
      }
      pos++;
      // strict_options: is file_count allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_file_count) / sizeof(option_file_count)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_file_count[cc] == *command) { ok = 1; }
        if (option_file_count[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'file_count' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--avg-size", argv[pos], 10))) {
      if (options[9] == NULL) {
        options[9] = numstring[0];
      } else {
        options[9] = numstring[atoi(options[9])];
      }
      pos++;
      // strict_options: is avg_size allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_avg_size) / sizeof(option_avg_size)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_avg_size[cc] == *command) { ok = 1; }
        if (option_avg_size[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'avg_size' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--uniques", argv[pos], 9))) {
      if (options[10] == NULL) {
        options[10] = numstring[0];
      } else {
        options[10] = numstring[atoi(options[10])];
      }
      pos++;
      // strict_options: is uniques allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_uniques) / sizeof(option_uniques)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_uniques[cc] == *command) { ok = 1; }
        if (option_uniques[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'uniques' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 12 && !strncmp("--stats-file", argv[pos], 12))) {
      options[11] = argv[pos+1];
      pos += 2;
      // strict_options: is stats_file allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_stats_file) / sizeof(option_stats_file)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_stats_file[cc] == *command) { ok = 1; }
        if (option_stats_file[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'stats_file' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--minsize", argv[pos], 9))) {
      options[12] = argv[pos+1];
      pos += 2;
      // strict_options: is minsize allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_minsize) / sizeof(option_minsize)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_minsize[cc] == *command) { ok = 1; }
        if (option_minsize[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'minsize' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--pathsep", argv[pos], 9))) {
      options[13] = argv[pos+1];
      pos += 2;
      // strict_options: is pathsep allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_pathsep) / sizeof(option_pathsep)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_pathsep[cc] == *command) { ok = 1; }
        if (option_pathsep[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'pathsep' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 5 && !strncmp("--cut", argv[pos], 5))) {
      options[14] = argv[pos+1];
      pos += 2;
      // strict_options: is cut allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_cut) / sizeof(option_cut)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_cut[cc] == *command) { ok = 1; }
        if (option_cut[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'cut' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--file", argv[pos], 6))) {
      options[15] = argv[pos+1];
      pos += 2;
      // strict_options: is file allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_file) / sizeof(option_file)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_file[cc] == *command) { ok = 1; }
        if (option_file[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'file' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 14 && !strncmp("--exclude-path", argv[pos], 14))) {
      options[16] = argv[pos+1];
      pos += 2;
      // strict_options: is exclude_path allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_exclude_path) / sizeof(option_exclude_path)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_exclude_path[cc] == *command) { ok = 1; }
        if (option_exclude_path[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'exclude_path' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--link", argv[pos], 6))) {
      if (options[17] == NULL) {
        options[17] = numstring[0];
      } else {
        options[17] = numstring[atoi(options[17])];
      }
      pos++;
      // strict_options: is link allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_link) / sizeof(option_link)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_link[cc] == *command) { ok = 1; }
        if (option_link[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'link' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 10 && !strncmp("--hardlink", argv[pos], 10))) {
      if (options[18] == NULL) {
        options[18] = numstring[0];
      } else {
        options[18] = numstring[atoi(options[18])];
      }
      pos++;
      // strict_options: is hardlink allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_hardlink) / sizeof(option_hardlink)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_hardlink[cc] == *command) { ok = 1; }
        if (option_hardlink[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'hardlink' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 9 && !strncmp("--verbose", argv[pos], 9))||
        (l == 2 && !strncmp("-v", argv[pos], 2))) {
      if (options[19] == NULL) {
        options[19] = numstring[0];
      } else {
        options[19] = numstring[atoi(options[19])];
      }
      pos++;
      // strict_options: is verbose allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_verbose) / sizeof(option_verbose)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_verbose[cc] == *command) { ok = 1; }
        if (option_verbose[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'verbose' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 7 && !strncmp("--quiet", argv[pos], 7))||
        (l == 2 && !strncmp("-q", argv[pos], 2))) {
      if (options[20] == NULL) {
        options[20] = numstring[0];
      } else {
        options[20] = numstring[atoi(options[20])];
      }
      pos++;
      // strict_options: is quiet allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_quiet) / sizeof(option_quiet)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_quiet[cc] == *command) { ok = 1; }
        if (option_quiet[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'quiet' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 4 && !strncmp("--db", argv[pos], 4))) {
      options[21] = argv[pos+1];
      pos += 2;
      // strict_options: is db allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_db) / sizeof(option_db)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_db[cc] == *command) { ok = 1; }
        if (option_db[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'db' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 11 && !strncmp("--no-unique", argv[pos], 11))) {
      if (options[22] == NULL) {
        options[22] = numstring[0];
      } else {
        options[22] = numstring[atoi(options[22])];
      }
      pos++;
      // strict_options: is no_unique allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_no_unique) / sizeof(option_no_unique)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_no_unique[cc] == *command) { ok = 1; }
        if (option_no_unique[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'no_unique' not compatible with given command\n");
        exit(1);
      }
      continue;
    }
    if ((l == 6 && !strncmp("--help", argv[pos], 6))||
        (l == 2 && !strncmp("-h", argv[pos], 2))) {
      if (options[23] == NULL) {
        options[23] = numstring[0];
      } else {
        options[23] = numstring[atoi(options[23])];
      }
      pos++;
      // strict_options: is help allowed?
      int ok = 0;
      unsigned int cc;
      unsigned int len = sizeof(option_help) / sizeof(option_help)[0];
      for (cc = 0; cc < len; cc++) {
        if (option_help[cc] == *command) { ok = 1; }
        if (option_help[cc] == COMMAND_GLOBAL) { ok = 1; }
      }
      if (!ok) {
        printf("error: option 'help' not compatible with given command\n");
        exit(1);
      }
      continue;
    }

    printf("error: unknown argument: [%s]\n", argv[pos]);
    exit(1);
  }

  return OPTGEN_OK;
}

int opt_count(char * str)
{
  if (str == NULL) {
    return 0;
  } else {
    return atoi(str);
  }
}

int opt_int(char * str, int def)
{
  if (str == NULL) {
    return def;
  } else {
    return atoi(str);
  }
}

char opt_char(char * str, char def)
{
  if (str == NULL) {
    return def;
  } else {
    return str[0];
  }
}

void opt_show_help()
{
  printf("scan     scan starting from the given path\n");
  printf("     --nodb             do not generate database file\n");
  printf("     --path             path where scanning will start\n");
  printf("     --firstblocks      max blocks to read in first hash pass\n");
  printf("     --firstblocksize   size of firstblocks to read\n");
  printf("     --intblocks        blocks to read in intermediate hash\n");
  printf("     --blocksize        size of regular blocks to read\n");
  printf("     --skip-two         do not compare two files directly\n");
  printf("     --skip-three       do not compare three files directly\n");
  printf("     --file-count       max estimated number of files to scan\n");
  printf("     --avg-size         estimated average file path length\n");
  printf("     --uniques          save info about unique files\n");
  printf("     --stats-file       save stats to this file\n");
  printf("     --minsize          min size of files to scan\n");
  printf("     --pathsep          change internal path separator to CHAR\n");
  printf("\n");
  printf("report   show duplicate report from last scan\n");
  printf("     --cut       remove 'PATHSEG' from report paths\n");
  printf("     --minsize   min size of total duplicated space to report\n");
  printf("\n");
  printf("file     based on report, check for duplicates of one file\n");
  printf("     --file           check this file\n");
  printf("     --cut            remove 'PATHSEG' from report paths\n");
  printf("     --exclude-path   ignore duplicates under\n");
  printf("\n");
  printf("uniques  based on report, look for unique files\n");
  printf("     --path           path where scanning will start\n");
  printf("     --cut            remove 'PATHSEG' from report paths\n");
  printf("     --exclude-path   ignore duplicates under\n");
  printf("\n");
  printf("dups     based on report, look for duplicate files\n");
  printf("     --path           path where scanning will start\n");
  printf("     --cut            remove 'PATHSEG' from report paths\n");
  printf("     --exclude-path   ignore duplicates under\n");
  printf("\n");
  printf("ls       based on report, list info about every file seen\n");
  printf("     --path           path where scanning will start\n");
  printf("     --cut            remove 'PATHSEG' from report paths\n");
  printf("     --exclude-path   ignore duplicates under\n");
  printf("\n");
  printf("rmsh     create shell script to delete all duplicates\n");
  printf("     --link       create symlinks for deleted files\n");
  printf("     --hardlink   create hard links for deleted files\n");
  printf("\n");
  printf("help     show brief usage info\n");
  printf("\n");
  printf("usage    show more extensive documentation\n");
  printf("\n");
  printf("license  show license info\n");
  printf("\n");
  printf("version  show version and exit\n");
  printf("\n");
  printf("General options:\n");
  printf("  -v --verbose     increase verbosity (may be repeated for more)\n");
  printf("  -q --quiet       quiet, supress all output except fatal errors\n");
  printf("     --db          path to dupd database file\n");
  printf("     --no-unique   ignore unique table even if present\n");
  printf("  -h --help        show brief usage info\n");
  printf("\n");
}