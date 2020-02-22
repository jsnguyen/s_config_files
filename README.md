# Instructions
* Rename the `program_config.h` files to `config.h` files and place in the program directory. For example:

```
mv st_config.h config.h && mv config.h ~/st
```

* `slock@.service` should be renamed and moved to  `/etc/systemd/system/slock@USERNAME.service`

* `.conf` files are for lid close hibernate/sleep.
* `logind.conf` goes in `/etc/systemd`
* `sleep.conf` goes in `/etc/systemd`
