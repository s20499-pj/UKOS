#!/usr/bin/env bash
wget -O - https://ztm.gda.pl/rozklady/pobierz_SIP.php?n[0]=1207 | grep -P --text '<td>' | sed 's/<td>/ /g;s/<[^>]*>//g;s/&nbsp;/juz/g'
