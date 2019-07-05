/* This file is generated by tis-mkfs tool only the first time.
It may be modified to adjust parameters. It won't be erased.
It can be removed to restore the default values. */

/* The default value for uid, gid, etc are the current one.
* Use the macros below to give other values.
*/
#define TIS_uid 1001
#define TIS_euid 1001
#define TIS_gid 1001
#define TIS_egid 1001

/* The file and directory owner: */
#define TIS_FILE_UID 1001
#define TIS_FILE_GID 1001

/* TIS_FILE_MODE defines the default permission for the files.
*/
#define TIS_FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/* TIS_FILE_SIZE is the default size for unknown files.
* You can change it here, or initilize it from you main function.
* For instance, to give a size between 100 and 200 to the 'unknown.txt' file:
*
* int i = __mkfs_get_file ("unknown.txt");
* assert (i != -1);
* __mkfs_fs_files[i].__mkfs_stat->st_size = tis_interval (100, 200);
*/
#define TIS_FILE_SIZE 100
