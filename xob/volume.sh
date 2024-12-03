#

vol=$(pactl get-sink-volume @DEFAULT_SINK@ | awk -F'/' '{for (i=1; i<=NF; i++) if ($i ~ /[0-9]%/) {gsub(/^ +| +%$/, "", $i); print $i+0; exit}}')

echo $vol >>/tmp/xobpipe
