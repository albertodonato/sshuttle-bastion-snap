#include <sys/types.h>
#include <stdio.h>

int setgroups(size_t size, const gid_t *list) {
  fprintf(stderr, "stub: stubbing out call to setgroups()\n");
  return 0;
}

int initgroups(const char *user, gid_t group) {
  fprintf(stderr, "stub: stubbing out call to initgroups()\n");
  return 0;
}

int setresuid(uid_t ruid, uid_t euid, uid_t suid) {
  fprintf(stderr, "stub: stubbing out call to setresuid()\n");
  return 0;
}

int setresgid(gid_t rgid, gid_t egid, gid_t sgid) {
  fprintf(stderr, "stub: stubbing out call to setresgid()\n");
  return 0;
}
