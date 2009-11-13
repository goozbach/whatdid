# A simple task tracking software written in bash
As a requirement of my job, I send "status reports" to my boss every week.  I've been using this whatdid script to write them for quite a while.  I thought others may find use in it.

## requires
As of right now, this script requires the following programs:

* `vim`
* GNU `date` (part of coreutils I beleive)

## INSTALL
copy the `source/bin` and `source/lib` directories to /usr/local/
or alternatively you can use the `stow` command

## bugs
* currently treats Friday as the first day of the week (needs to be configureable)

## TODO
* create the whatdid-report command. (This second script is the main reason that the script does all it's "work" in an include file)
