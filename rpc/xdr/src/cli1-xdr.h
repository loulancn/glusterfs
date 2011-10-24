/*
  Copyright (c) 2007-2011 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/
/*
 * Most content of this file is generated using rpcgen. There are very few
 * additions done to this file (changes can be seen by running 'rpcgen'
 * and taking a diff of this file with rpcgen generated file
 */

#include "xdr-common.h"

#ifndef _CLI1_XDR_H_RPCGEN
#define _CLI1_XDR_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum gf1_cluster_type {
	GF_CLUSTER_TYPE_NONE = 0,
	GF_CLUSTER_TYPE_STRIPE = 0 + 1,
	GF_CLUSTER_TYPE_REPLICATE = 0 + 2,
};
typedef enum gf1_cluster_type gf1_cluster_type;

enum gf1_cli_replace_op {
	GF_REPLACE_OP_NONE = 0,
	GF_REPLACE_OP_START = 0 + 1,
	GF_REPLACE_OP_COMMIT = 0 + 2,
	GF_REPLACE_OP_PAUSE = 0 + 3,
	GF_REPLACE_OP_ABORT = 0 + 4,
	GF_REPLACE_OP_STATUS = 0 + 5,
	GF_REPLACE_OP_COMMIT_FORCE = 0 + 6,
};
typedef enum gf1_cli_replace_op gf1_cli_replace_op;

enum gf_quota_type {
	GF_QUOTA_OPTION_TYPE_NONE = 0,
	GF_QUOTA_OPTION_TYPE_ENABLE = 0 + 1,
	GF_QUOTA_OPTION_TYPE_DISABLE = 0 + 2,
	GF_QUOTA_OPTION_TYPE_LIMIT_USAGE = 0 + 3,
	GF_QUOTA_OPTION_TYPE_REMOVE = 0 + 4,
	GF_QUOTA_OPTION_TYPE_LIST = 0 + 5,
	GF_QUOTA_OPTION_TYPE_VERSION = 0 + 6,
};
typedef enum gf_quota_type gf_quota_type;

enum gf1_cli_friends_list {
	GF_CLI_LIST_ALL = 1,
};
typedef enum gf1_cli_friends_list gf1_cli_friends_list;

enum gf1_cli_get_volume {
	GF_CLI_GET_VOLUME_ALL = 1,
	GF_CLI_GET_VOLUME = 1 + 1,
	GF_CLI_GET_NEXT_VOLUME = 1 + 2,
};
typedef enum gf1_cli_get_volume gf1_cli_get_volume;

enum gf1_cli_sync_volume {
	GF_CLI_SYNC_ALL = 1,
};
typedef enum gf1_cli_sync_volume gf1_cli_sync_volume;

enum gf1_cli_op_flags {
	GF_CLI_FLAG_OP_FORCE = 1,
};
typedef enum gf1_cli_op_flags gf1_cli_op_flags;

enum gf1_cli_gsync_set {
	GF_GSYNC_OPTION_TYPE_NONE = 0,
	GF_GSYNC_OPTION_TYPE_START = 1,
	GF_GSYNC_OPTION_TYPE_STOP = 2,
	GF_GSYNC_OPTION_TYPE_CONFIG = 3,
        GF_GSYNC_OPTION_TYPE_STATUS = 4,
        GF_GSYNC_OPTION_TYPE_ROTATE = 5,

};
typedef enum gf1_cli_gsync_set gf1_cli_gsync_set;

enum gf1_cli_stats_op {
	GF_CLI_STATS_NONE = 0,
	GF_CLI_STATS_START = 1,
	GF_CLI_STATS_STOP = 2,
	GF_CLI_STATS_INFO = 3,
        GF_CLI_STATS_TOP = 4,
};
typedef enum gf1_cli_stats_op gf1_cli_stats_op;

enum gf1_cli_top_op {
        GF_CLI_TOP_NONE = 0,
        GF_CLI_TOP_OPEN = 0 + 1,
        GF_CLI_TOP_READ = 0 + 2,
        GF_CLI_TOP_WRITE = 0 + 3,
        GF_CLI_TOP_OPENDIR = 0 + 4,
        GF_CLI_TOP_READDIR = 0 + 5,
        GF_CLI_TOP_READ_PERF = 0 + 6,
        GF_CLI_TOP_WRITE_PERF = 0 + 7,
};
typedef enum gf1_cli_top_op gf1_cli_top_op;

struct gf1_cli_probe_req {
	char *hostname;
	int port;
};
typedef struct gf1_cli_probe_req gf1_cli_probe_req;

struct gf1_cli_probe_rsp {
	int op_ret;
	int op_errno;
	int port;
	char *hostname;
};
typedef struct gf1_cli_probe_rsp gf1_cli_probe_rsp;

struct gf1_cli_deprobe_req {
	char *hostname;
	int port;
};
typedef struct gf1_cli_deprobe_req gf1_cli_deprobe_req;

struct gf1_cli_deprobe_rsp {
	int op_ret;
	int op_errno;
	char *hostname;
};
typedef struct gf1_cli_deprobe_rsp gf1_cli_deprobe_rsp;

struct gf1_cli_peer_list_req {
	int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_peer_list_req gf1_cli_peer_list_req;

struct gf1_cli_peer_list_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int friends_len;
		char *friends_val;
	} friends;
};
typedef struct gf1_cli_peer_list_rsp gf1_cli_peer_list_rsp;

struct gf1_cli_get_vol_req {
	int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_get_vol_req gf1_cli_get_vol_req;

struct gf1_cli_get_vol_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int volumes_len;
		char *volumes_val;
	} volumes;
};
typedef struct gf1_cli_get_vol_rsp gf1_cli_get_vol_rsp;

struct gf1_cli_create_vol_req {
	char *volname;
	gf1_cluster_type type;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_create_vol_req gf1_cli_create_vol_req;

struct gf1_cli_create_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_create_vol_rsp gf1_cli_create_vol_rsp;

struct gf1_cli_delete_vol_req {
	char *volname;
};
typedef struct gf1_cli_delete_vol_req gf1_cli_delete_vol_req;

struct gf1_cli_delete_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_delete_vol_rsp gf1_cli_delete_vol_rsp;

struct gf1_cli_start_vol_req {
	char *volname;
	int flags;
};
typedef struct gf1_cli_start_vol_req gf1_cli_start_vol_req;

struct gf1_cli_start_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_start_vol_rsp gf1_cli_start_vol_rsp;

struct gf1_cli_stop_vol_req {
	char *volname;
	int flags;
};
typedef struct gf1_cli_stop_vol_req gf1_cli_stop_vol_req;

struct gf1_cli_stop_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_stop_vol_rsp gf1_cli_stop_vol_rsp;

struct gf1_cli_rename_vol_req {
	char *old_volname;
	char *new_volname;
};
typedef struct gf1_cli_rename_vol_req gf1_cli_rename_vol_req;

struct gf1_cli_rename_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_rename_vol_rsp gf1_cli_rename_vol_rsp;

struct gf1_cli_defrag_vol_req {
	int cmd;
	char *volname;
};
typedef struct gf1_cli_defrag_vol_req gf1_cli_defrag_vol_req;

struct gf1_cli_defrag_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	u_quad_t files;
	u_quad_t size;
	u_quad_t lookedup_files;
};
typedef struct gf1_cli_defrag_vol_rsp gf1_cli_defrag_vol_rsp;

struct gf2_cli_defrag_vol_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
	char *volname;
	u_quad_t files;
	u_quad_t size;
	u_quad_t lookedup_files;
};
typedef struct gf2_cli_defrag_vol_rsp gf2_cli_defrag_vol_rsp;

struct gf1_cli_add_brick_req {
	char *volname;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_add_brick_req gf1_cli_add_brick_req;

struct gf1_cli_add_brick_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_add_brick_rsp gf1_cli_add_brick_rsp;

struct gf1_cli_remove_brick_req {
	char *volname;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_remove_brick_req gf1_cli_remove_brick_req;

struct gf1_cli_remove_brick_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_remove_brick_rsp gf1_cli_remove_brick_rsp;

struct gf1_cli_replace_brick_req {
	char *volname;
	gf1_cli_replace_op op;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_replace_brick_req gf1_cli_replace_brick_req;

struct gf1_cli_replace_brick_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
	char *volname;
	char *status;
};
typedef struct gf1_cli_replace_brick_rsp gf1_cli_replace_brick_rsp;

struct gf1_cli_reset_vol_req {
	char *volname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_reset_vol_req gf1_cli_reset_vol_req;

struct gf1_cli_reset_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
};
typedef struct gf1_cli_reset_vol_rsp gf1_cli_reset_vol_rsp;

struct gf1_cli_quota_req {
	char *volname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_quota_req gf1_cli_quota_req;

struct gf1_cli_quota_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
	char *limit_list;
	gf_quota_type type;
};
typedef struct gf1_cli_quota_rsp gf1_cli_quota_rsp;

struct gf1_cli_set_vol_req {
	char *volname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_set_vol_req gf1_cli_set_vol_req;

struct gf1_cli_set_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
	char *op_errstr;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_set_vol_rsp gf1_cli_set_vol_rsp;

struct gf1_cli_log_filename_req {
	char *volname;
	char *brick;
	char *path;
};
typedef struct gf1_cli_log_filename_req gf1_cli_log_filename_req;

struct gf1_cli_log_filename_rsp {
	int op_ret;
	int op_errno;
	char *errstr;
};
typedef struct gf1_cli_log_filename_rsp gf1_cli_log_filename_rsp;

struct gf1_cli_log_locate_req {
	char *volname;
	char *brick;
};
typedef struct gf1_cli_log_locate_req gf1_cli_log_locate_req;

struct gf1_cli_sync_volume_req {
	int flags;
	char *volname;
	char *hostname;
};
typedef struct gf1_cli_sync_volume_req gf1_cli_sync_volume_req;

struct gf1_cli_log_locate_rsp {
	int op_ret;
	int op_errno;
	char *path;
};
typedef struct gf1_cli_log_locate_rsp gf1_cli_log_locate_rsp;

struct gf1_cli_log_rotate_req {
	char *volname;
	char *brick;
};
typedef struct gf1_cli_log_rotate_req gf1_cli_log_rotate_req;

struct gf1_cli_log_rotate_rsp {
	int op_ret;
	int op_errno;
	char *errstr;
};
typedef struct gf1_cli_log_rotate_rsp gf1_cli_log_rotate_rsp;

struct gf1_cli_sync_volume_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
};
typedef struct gf1_cli_sync_volume_rsp gf1_cli_sync_volume_rsp;

struct gf1_cli_fsm_log_req {
	char *name;
};
typedef struct gf1_cli_fsm_log_req gf1_cli_fsm_log_req;

struct gf1_cli_fsm_log_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
	struct {
		u_int fsm_log_len;
		char *fsm_log_val;
	} fsm_log;
};
typedef struct gf1_cli_fsm_log_rsp gf1_cli_fsm_log_rsp;

struct gf1_cli_gsync_set_req {
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_gsync_set_req gf1_cli_gsync_set_req;

struct gf1_cli_gsync_set_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
	int type;
	char *op_name;
	char *subop;
	char *master;
	char *slave;
	char *gsync_prefix;
        char *glusterd_workdir;
	struct {
		u_int status_dict_len;
		char *status_dict_val;
	} status_dict;
};
typedef struct gf1_cli_gsync_set_rsp gf1_cli_gsync_set_rsp;

struct gf1_cli_stats_volume_req {
	char *volname;
	gf1_cli_stats_op op;
	struct {
		u_int dict_req_len;
		char* dict_req_val;
	} dict_req;
};
typedef struct gf1_cli_stats_volume_req gf1_cli_stats_volume_req;

struct gf1_cli_stats_volume_rsp {
	int op_ret;
	int op_errno;
	char *op_errstr;
	struct {
		u_int stats_info_len;
		char *stats_info_val;
	} stats_info;
};
typedef struct gf1_cli_stats_volume_rsp gf1_cli_stats_volume_rsp;

struct gf1_cli_getwd_req {
	int unused;
};
typedef struct gf1_cli_getwd_req gf1_cli_getwd_req;

struct gf1_cli_getwd_rsp {
	int op_ret;
	int op_errno;
	char *wd;
};
typedef struct gf1_cli_getwd_rsp gf1_cli_getwd_rsp;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_gf1_cluster_type (XDR *, gf1_cluster_type*);
extern  bool_t xdr_gf1_cli_replace_op (XDR *, gf1_cli_replace_op*);
extern  bool_t xdr_gf1_cli_friends_list (XDR *, gf1_cli_friends_list*);
extern  bool_t xdr_gf1_cli_get_volume (XDR *, gf1_cli_get_volume*);
extern  bool_t xdr_gf1_cli_sync_volume (XDR *, gf1_cli_sync_volume*);
extern  bool_t xdr_gf1_cli_op_flags (XDR *, gf1_cli_op_flags*);
extern  bool_t xdr_gf1_cli_gsync_set (XDR *, gf1_cli_gsync_set*);
extern  bool_t xdr_gf1_cli_top_op (XDR *, gf1_cli_top_op*);
extern  bool_t xdr_gf1_cli_stats_op (XDR *, gf1_cli_stats_op*);
extern  bool_t xdr_gf_quota_type (XDR *, gf_quota_type*);
extern  bool_t xdr_gf1_cli_probe_req (XDR *, gf1_cli_probe_req*);
extern  bool_t xdr_gf1_cli_probe_rsp (XDR *, gf1_cli_probe_rsp*);
extern  bool_t xdr_gf1_cli_deprobe_req (XDR *, gf1_cli_deprobe_req*);
extern  bool_t xdr_gf1_cli_deprobe_rsp (XDR *, gf1_cli_deprobe_rsp*);
extern  bool_t xdr_gf1_cli_peer_list_req (XDR *, gf1_cli_peer_list_req*);
extern  bool_t xdr_gf1_cli_peer_list_rsp (XDR *, gf1_cli_peer_list_rsp*);
extern  bool_t xdr_gf1_cli_get_vol_req (XDR *, gf1_cli_get_vol_req*);
extern  bool_t xdr_gf1_cli_get_vol_rsp (XDR *, gf1_cli_get_vol_rsp*);
extern  bool_t xdr_gf1_cli_create_vol_req (XDR *, gf1_cli_create_vol_req*);
extern  bool_t xdr_gf1_cli_create_vol_rsp (XDR *, gf1_cli_create_vol_rsp*);
extern  bool_t xdr_gf1_cli_delete_vol_req (XDR *, gf1_cli_delete_vol_req*);
extern  bool_t xdr_gf1_cli_delete_vol_rsp (XDR *, gf1_cli_delete_vol_rsp*);
extern  bool_t xdr_gf1_cli_start_vol_req (XDR *, gf1_cli_start_vol_req*);
extern  bool_t xdr_gf1_cli_start_vol_rsp (XDR *, gf1_cli_start_vol_rsp*);
extern  bool_t xdr_gf1_cli_stop_vol_req (XDR *, gf1_cli_stop_vol_req*);
extern  bool_t xdr_gf1_cli_stop_vol_rsp (XDR *, gf1_cli_stop_vol_rsp*);
extern  bool_t xdr_gf1_cli_rename_vol_req (XDR *, gf1_cli_rename_vol_req*);
extern  bool_t xdr_gf1_cli_rename_vol_rsp (XDR *, gf1_cli_rename_vol_rsp*);
extern  bool_t xdr_gf1_cli_defrag_vol_req (XDR *, gf1_cli_defrag_vol_req*);
extern  bool_t xdr_gf1_cli_defrag_vol_rsp (XDR *, gf1_cli_defrag_vol_rsp*);
extern  bool_t xdr_gf2_cli_defrag_vol_rsp (XDR *, gf2_cli_defrag_vol_rsp*);
extern  bool_t xdr_gf1_cli_add_brick_req (XDR *, gf1_cli_add_brick_req*);
extern  bool_t xdr_gf1_cli_add_brick_rsp (XDR *, gf1_cli_add_brick_rsp*);
extern  bool_t xdr_gf1_cli_remove_brick_req (XDR *, gf1_cli_remove_brick_req*);
extern  bool_t xdr_gf1_cli_remove_brick_rsp (XDR *, gf1_cli_remove_brick_rsp*);
extern  bool_t xdr_gf1_cli_replace_brick_req (XDR *, gf1_cli_replace_brick_req*);
extern  bool_t xdr_gf1_cli_replace_brick_rsp (XDR *, gf1_cli_replace_brick_rsp*);
extern  bool_t xdr_gf1_cli_reset_vol_req (XDR *, gf1_cli_reset_vol_req*);
extern  bool_t xdr_gf1_cli_reset_vol_rsp (XDR *, gf1_cli_reset_vol_rsp*);
extern  bool_t xdr_gf1_cli_quota_req (XDR *, gf1_cli_quota_req*);
extern  bool_t xdr_gf1_cli_quota_rsp (XDR *, gf1_cli_quota_rsp*);
extern  bool_t xdr_gf1_cli_set_vol_req (XDR *, gf1_cli_set_vol_req*);
extern  bool_t xdr_gf1_cli_set_vol_rsp (XDR *, gf1_cli_set_vol_rsp*);
extern  bool_t xdr_gf1_cli_log_filename_req (XDR *, gf1_cli_log_filename_req*);
extern  bool_t xdr_gf1_cli_log_filename_rsp (XDR *, gf1_cli_log_filename_rsp*);
extern  bool_t xdr_gf1_cli_log_locate_req (XDR *, gf1_cli_log_locate_req*);
extern  bool_t xdr_gf1_cli_sync_volume_req (XDR *, gf1_cli_sync_volume_req*);
extern  bool_t xdr_gf1_cli_log_locate_rsp (XDR *, gf1_cli_log_locate_rsp*);
extern  bool_t xdr_gf1_cli_log_rotate_req (XDR *, gf1_cli_log_rotate_req*);
extern  bool_t xdr_gf1_cli_log_rotate_rsp (XDR *, gf1_cli_log_rotate_rsp*);
extern  bool_t xdr_gf1_cli_sync_volume_rsp (XDR *, gf1_cli_sync_volume_rsp*);
extern  bool_t xdr_gf1_cli_fsm_log_req (XDR *, gf1_cli_fsm_log_req*);
extern  bool_t xdr_gf1_cli_fsm_log_rsp (XDR *, gf1_cli_fsm_log_rsp*);
extern  bool_t xdr_gf1_cli_gsync_set_req (XDR *, gf1_cli_gsync_set_req*);
extern  bool_t xdr_gf1_cli_gsync_set_rsp (XDR *, gf1_cli_gsync_set_rsp*);
extern  bool_t xdr_gf1_cli_stats_volume_req (XDR *, gf1_cli_stats_volume_req*);
extern  bool_t xdr_gf1_cli_stats_volume_rsp (XDR *, gf1_cli_stats_volume_rsp*);
extern  bool_t xdr_gf1_cli_getwd_req (XDR *, gf1_cli_getwd_req*);
extern  bool_t xdr_gf1_cli_getwd_rsp (XDR *, gf1_cli_getwd_rsp*);

#else /* K&R C */
extern bool_t xdr_gf1_cluster_type ();
extern bool_t xdr_gf1_cli_replace_op ();
extern bool_t xdr_gf1_cli_friends_list ();
extern bool_t xdr_gf1_cli_get_volume ();
extern bool_t xdr_gf1_cli_sync_volume ();
extern bool_t xdr_gf1_cli_op_flags ();
extern bool_t xdr_gf1_cli_gsync_set ();
extern bool_t xdr_gf1_cli_stats_op ();
extern bool_t xdr_gf1_cli_top_op ();
extern bool_t xdr_gf_quota_type ();
extern bool_t xdr_gf1_cli_probe_req ();
extern bool_t xdr_gf1_cli_probe_rsp ();
extern bool_t xdr_gf1_cli_deprobe_req ();
extern bool_t xdr_gf1_cli_deprobe_rsp ();
extern bool_t xdr_gf1_cli_peer_list_req ();
extern bool_t xdr_gf1_cli_peer_list_rsp ();
extern bool_t xdr_gf1_cli_get_vol_req ();
extern bool_t xdr_gf1_cli_get_vol_rsp ();
extern bool_t xdr_gf1_cli_create_vol_req ();
extern bool_t xdr_gf1_cli_create_vol_rsp ();
extern bool_t xdr_gf1_cli_delete_vol_req ();
extern bool_t xdr_gf1_cli_delete_vol_rsp ();
extern bool_t xdr_gf1_cli_start_vol_req ();
extern bool_t xdr_gf1_cli_start_vol_rsp ();
extern bool_t xdr_gf1_cli_stop_vol_req ();
extern bool_t xdr_gf1_cli_stop_vol_rsp ();
extern bool_t xdr_gf1_cli_rename_vol_req ();
extern bool_t xdr_gf1_cli_rename_vol_rsp ();
extern bool_t xdr_gf1_cli_defrag_vol_req ();
extern bool_t xdr_gf1_cli_defrag_vol_rsp ();
extern bool_t xdr_gf2_cli_defrag_vol_rsp ();
extern bool_t xdr_gf1_cli_add_brick_req ();
extern bool_t xdr_gf1_cli_add_brick_rsp ();
extern bool_t xdr_gf1_cli_remove_brick_req ();
extern bool_t xdr_gf1_cli_remove_brick_rsp ();
extern bool_t xdr_gf1_cli_replace_brick_req ();
extern bool_t xdr_gf1_cli_replace_brick_rsp ();
extern bool_t xdr_gf1_cli_reset_vol_req ();
extern bool_t xdr_gf1_cli_reset_vol_rsp ();
extern bool_t xdr_gf1_cli_quota_req ();
extern bool_t xdr_gf1_cli_quota_rsp ();
extern bool_t xdr_gf1_cli_set_vol_req ();
extern bool_t xdr_gf1_cli_set_vol_rsp ();
extern bool_t xdr_gf1_cli_log_filename_req ();
extern bool_t xdr_gf1_cli_log_filename_rsp ();
extern bool_t xdr_gf1_cli_log_locate_req ();
extern bool_t xdr_gf1_cli_sync_volume_req ();
extern bool_t xdr_gf1_cli_log_locate_rsp ();
extern bool_t xdr_gf1_cli_log_rotate_req ();
extern bool_t xdr_gf1_cli_log_rotate_rsp ();
extern bool_t xdr_gf1_cli_sync_volume_rsp ();
extern bool_t xdr_gf1_cli_fsm_log_req ();
extern bool_t xdr_gf1_cli_fsm_log_rsp ();
extern bool_t xdr_gf1_cli_gsync_set_req ();
extern bool_t xdr_gf1_cli_gsync_set_rsp ();
extern bool_t xdr_gf1_cli_stats_volume_req ();
extern bool_t xdr_gf1_cli_stats_volume_rsp ();
extern bool_t xdr_gf1_cli_getwd_req ();
extern bool_t xdr_gf1_cli_getwd_rsp ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CLI1-XDR_H_RPCGEN */
