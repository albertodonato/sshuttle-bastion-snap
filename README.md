# OpenSSH server for a sshuttle bastion host

[![Snap Package](https://snapcraft.io/sshuttle-bastion/badge.svg)](https://snapcraft.io/sshuttle-bastion)

This snap provides an SSH server for use as a [sshuttle](https://github.com/sshuttle/sshuttle) VPN endpoint.

It also includes the Python3 interpreter. to be able to run the server side scripts for `sshuttle`.

## Installing

The snap can be installed from the store via

```bash
    sudo snap install sshuttle-bastion --edge
```

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/sshuttle-bastion)


## Configuration

The service is started by default on port `2222`, and accessible via key authentication, using the (snap-confined) `root` user.
To allow access, authorized keys must be configured.

Here's the full list of available config options:

- `ssh.loglevel` [`INFO`]: loglevel for the ssh daemon. Logs are sent to stdout and accessible through `journalctl`.
- `ssh.port`: [`2222`]: service port.
- `ssh.authorizedkeys`: content of the `authorized_keys` file for the `root` user.

Settings can be applied via:

```bash
    sudo snap set sshuttle-bastion <key>=<value>
```
