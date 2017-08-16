<?php
$z[0]=Array("field","",40,59);
$z[0][4]['name']="title";
$z[1]=Array("global","",60,86);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",485,537);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("field","",573,595);
$z[3][4]['name']="keywords";
$z[4]=Array("global","",698,730);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("include","",780,819);
$z[5][4]['filename']="header_m.htm";
$z[6]=Array("field","",1038,1057);
$z[6][4]['name']="title";
$z[7]=Array("field","",1101,1157);
$z[7][4]['name']="pubdate";
$z[7][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[8]=Array("field","",1178,1198);
$z[8][4]['name']="writer";
$z[9]=Array("field","",1293,1320);
$z[9][4]['name']="phpurl";
$z[10]=Array("field","",1344,1367);
$z[10][4]['name']="id";
$z[11]=Array("field","",1372,1396);
$z[11][4]['name']="mid";
$z[12]=Array("field","",1543,1561);
$z[12][4]['name']="body";
$z[13]=Array("prenext","",1900,1925);
$z[13][4]['get']="pre";
$z[14]=Array("prenext","",1973,1999);
$z[14][4]['get']="next";
$z[15]=Array("sql","\n							<li class=\"list-group-item\"><a href=\"view.php?aid=[field:id]\" title=\"[field:title/]\" target='_self'>[field:title/]</a></li>\n							",2926,3160);
$z[15][4]['sql']="select * from #@__archives where typeid = 43 order by rand() limit 8";
$z[16]=Array("include","",3264,3303);
$z[16][4]['filename']="footer_m.htm";

?>