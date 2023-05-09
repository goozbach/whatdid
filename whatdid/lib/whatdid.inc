# Get the week number
# should be +1 if today is Friday, Saturday 
# week should start on Sunday
WEEKNUM=$(date +%U)
getweek() {
  # add 1 if day = friday or saturday
  case $(date +%u) in
  5 ) 
   ((WEEKNUM++))
  ;;
  6 ) 
   ((WEEKNUM++))
  ;;
  * ) 
  ;;
  esac
}

TODAY=$(date --iso)
YEAR=$(date +%Y)
TOPDIR=$HOME/.whatdid/
WEEKDIR=$TOPDIR/$YEAR/$WEEKNUM/
THISFILE=$WEEKDIR/${TODAY}.log

createdir() {
  mkdir -p $WEEKDIR 
}

# git stuff

update_topdir() {
  MYDIR=${PWD}
  cd $TOPDIR
  git add .
  git commit -am "automated update $(date)"
  cd $MYDIR
}
