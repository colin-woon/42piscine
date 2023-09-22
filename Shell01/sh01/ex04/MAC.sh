ifconfig $interface | awk '/ether/{print toupper($2)}' | grep -v "AUTOSELECT"
