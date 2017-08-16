<?php
$z[0]=Array("field","",43,66);
$z[0][4]['name']="seotitle";
$z[1]=Array("field","",109,138);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",178,237);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("global","",299,326);
$z[3][4]['name']="cfg_basehost";
$z[4]=Array("global","",384,411);
$z[4][4]['name']="cfg_basehost";
$z[5]=Array("global","",477,504);
$z[5][4]['name']="cfg_basehost";
$z[6]=Array("global","",585,612);
$z[6][4]['name']="cfg_basehost";
$z[7]=Array("include","",679,716);
$z[7][4]['filename']="header.htm";
$z[8]=Array("global","",804,831);
$z[8][4]['name']="cfg_basehost";
$z[9]=Array("sql","\r\n							<li>[field:normbody/]</li>\r\n							",2358,2474);
$z[9][4]['sql']="select normbody from dede_myad where clsid=4";
$z[10]=Array("global","",2573,2600);
$z[10][4]['name']="cfg_basehost";
$z[11]=Array("sql","\r\n										<li>[field:normbody/]</li>\r\n										",2702,2824);
$z[11][4]['sql']="select normbody from dede_myad where clsid=4";
$z[12]=Array("global","",2912,2939);
$z[12][4]['name']="cfg_basehost";
$z[13]=Array("sql","\r\n							<li>\r\n								<div class=\"pic\">\r\n									<img style=\"width: 260px;height:160px;\" src=\"[field:litpic/]\"/>\r\n									<a target=\"_blank\" href=\"[field:id runphp='yes'] \$id=@me;@me=”;\$url=GetOneArchive(\$id);@me=\$url['arcurl'];[/field:id]\"><img src=\"/style/images/ad05.png\"/></a>\r\n								</div>\r\n								<h2><a target=\"_blank\" href=\"[field:id runphp='yes'] \$id=@me;@me=”;\$url=GetOneArchive(\$id);@me=\$url['arcurl'];[/field:id]\">[field:title/]</a></h2>								\r\n							</li>\r\n						",4424,5142);
$z[13][4]['sql']="select `litpic`,`id`,`title` from dede_archives where typeid in(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42) and flag like '%c%'";
$z[14]=Array("include","",6250,6287);
$z[14][4]['filename']="footer.htm";

?>