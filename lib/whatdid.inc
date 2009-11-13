# Get the week number
# should be +1 if today is Friday, Saturday 
# week should start on Sunday
getweek() {
  # add 1 if day = friday or saturday
  _week=$(date +%U)
  case $(date +%u) in
  5 ) 
   ((_week++))
   echo -n $_week
  ;;
  6 ) 
   ((_week++))
   echo -n $_week
  ;;
  * ) 
   return
  ;;
  esac
  return
}

WEEKNUM=$(getweek)
TODAY=$(date --iso)
TOPDIR=$HOME/.whatdid/
WEEKDIR=$TOPDIR/$WEEKNUM/
THISFILE=$WEEKDIR/${TODAY}.log

createdir() {
  mkdir -p $WEEKDIR 
}

