#!/bin/bash
#
# Clean Code Rules
#
# author: Ayron Matos
# -------------------------------------------------------
# Rules for a clean code:
#
# 1) Write only one command per line
# 2) Align commands vertically with the same block
# 3) Indent the alignment to the right each new block
# 4) Using blank lines to split sections
# 5) Don't crossline the edge of eighty columns for line
#
# long command in a single line:
gdialog --title "Complete Shell Script Course" --msgbox "Welcome!" 0 0

# Making it easier to read:
gdialog \
	--title "Complete Shell Script Course" \
 	--yesno "Welcome!" \
	0 0
