import os

class GConf(object):
    ssh_ctl_dir = None
    ssh_ctl_args = None
    cpid = None
    pid_file_owned = False
    permanent_handles = []
    log_metadata = {}

    @classmethod
    def setup_ssh_ctl(cls, ctld):
        cls.ssh_ctl_dir = ctld
        cls.ssh_ctl_args = ["-oControlMaster=auto", "-S", os.path.join(ctld, "gsycnd-ssh-%r@%h:%p")]

gconf = GConf()
