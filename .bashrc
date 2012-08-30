#PS1="[\t][\u\w]"

function startx {
startxwin
export DISPLAY=:0.0
}

function prompt {
  local BLACK="\[\033[0;30m\]"
  local BLACKBOLD="\[\033[1;30m\]"
  local RED="\[\033[0;31m\]"
  local REDBOLD="\[\033[1;31m\]"
  local GREEN="\[\033[0;32m\]"
  local GREENBOLD="\[\033[1;32m\]"
  local YELLOW="\[\033[0;33m\]"
  local YELLOWBOLD="\[\033[1;33m\]"
  local BLUE="\[\033[0;34m\]"
  local BLUEBOLD="\[\033[1;34m\]"
  local PURPLE="\[\033[0;35m\]"
  local PURPLEBOLD="\[\033[1;35m\]"
  local CYAN="\[\033[0;36m\]"
  local CYANBOLD="\[\033[1;36m\]"
  local WHITE="\[\033[0;37m\]"
  local WHITEBOLD="\[\033[1;37m\]"
export PS1="\n$YELLOW[\t]$GREENBOLD[\u@\h]:$BLUEBOLD\w $CYANBOLD\\$ "
}
prompt

#set nobeep
if [ $TERM == "rxvt" ]; then
    xset b off
fi

# Useful alias
alias .ee='vi ~/.bashrc'
alias .ss='source ~/.bashrc'
alias ll='ls -l'
alias la='ls -a'

#setterm -blength 0
if [ -n $R_LIBS ]; then
  export R_LIBS=~/Rlibs:$R_LIBS
else
  export R_LIBS=~/Rlibs
fi

# source bash_profile
source "${HOME}/.bash_profile"

function mountsf {
sudo mount -t vboxsf cygwin /host
sudo mount -t vboxsf F_DRIVE /F_Drive
sudo mount -t vboxsf Top1000file /Top_1000_Unvierse
}
mountsf
