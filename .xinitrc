exec dwm &
exec dwmblocks &
exec unclutter &
mkfifo /tmp/xobpipe &
tail -f /tmp/xobpipe | xob
