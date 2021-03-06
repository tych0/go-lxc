// Copyright © 2013, S.Çağlar Onur
// Use of this source code is governed by a LGPLv2.1 licence
// license that can be found in the LICENSE file.
//
// Authors:
// S.Çağlar Onur <caglar@10ur.org>

extern bool go_lxc_add_device_node(struct lxc_container *c, const char *src_path, const char *dest_path);
extern void go_lxc_clear_config(struct lxc_container *c);
extern bool go_lxc_clear_config_item(struct lxc_container *c, const char *key);
extern bool go_lxc_clone(struct lxc_container *c, const char *newname, int flags, const char *bdevtype);
extern bool go_lxc_console(struct lxc_container *c, int ttynum, int stdinfd, int stdoutfd, int stderrfd, int escape);
extern bool go_lxc_create(struct lxc_container *c, const char *t, const char *bdevtype, int flags, char * const argv[]);
extern bool go_lxc_defined(struct lxc_container *c);
extern bool go_lxc_destroy(struct lxc_container *c);
extern bool go_lxc_freeze(struct lxc_container *c);
extern bool go_lxc_load_config(struct lxc_container *c, const char *alt_file);
extern bool go_lxc_may_control(struct lxc_container *c);
extern bool go_lxc_reboot(struct lxc_container *c);
extern bool go_lxc_remove_device_node(struct lxc_container *c, const char *src_path, const char *dest_path);
extern bool go_lxc_rename(struct lxc_container *c, const char *newname);
extern bool go_lxc_running(struct lxc_container *c);
extern bool go_lxc_save_config(struct lxc_container *c, const char *alt_file);
extern bool go_lxc_set_cgroup_item(struct lxc_container *c, const char *key, const char *value);
extern bool go_lxc_set_config_item(struct lxc_container *c, const char *key, const char *value);
extern bool go_lxc_set_config_path(struct lxc_container *c, const char *path);
extern bool go_lxc_shutdown(struct lxc_container *c, int timeout);
extern bool go_lxc_snapshot_destroy(struct lxc_container *c, const char *snapname);
extern bool go_lxc_snapshot_restore(struct lxc_container *c, const char *snapname, const char *newname);
extern bool go_lxc_start(struct lxc_container *c, int useinit, char * const argv[]);
extern bool go_lxc_stop(struct lxc_container *c);
extern bool go_lxc_unfreeze(struct lxc_container *c);
extern bool go_lxc_wait(struct lxc_container *c, const char *state, int timeout);
extern bool go_lxc_want_close_all_fds(struct lxc_container *c, bool state);
extern bool go_lxc_want_daemonize(struct lxc_container *c, bool state);
extern char* go_lxc_config_file_name(struct lxc_container *c);
extern char* go_lxc_get_cgroup_item(struct lxc_container *c, const char *key);
extern char* go_lxc_get_config_item(struct lxc_container *c, const char *key);
extern char** go_lxc_get_interfaces(struct lxc_container *c);
extern char** go_lxc_get_ips(struct lxc_container *c, const char *interface, const char *family, int scope);
extern char* go_lxc_get_keys(struct lxc_container *c, const char *key);
extern char* go_lxc_get_running_config_item(struct lxc_container *c, const char *key);
extern const char* go_lxc_get_config_path(struct lxc_container *c);
extern const char* go_lxc_state(struct lxc_container *c);
extern int go_lxc_attach_run_wait(struct lxc_container *c, bool clear_env, int stdinfd, int stdoutfd, int stderrfd, const char * const argv[]);
extern int go_lxc_attach(struct lxc_container *c, bool clear_env);
extern int go_lxc_console_getfd(struct lxc_container *c, int ttynum);
extern int go_lxc_snapshot_list(struct lxc_container *c, struct lxc_snapshot **ret);
extern int go_lxc_snapshot(struct lxc_container *c);
extern pid_t go_lxc_init_pid(struct lxc_container *c);
