<?php
$z[0]=Array("field","",40,63);
$z[0][4]['name']="seotitle";
$z[1]=Array("field","",103,132);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",169,228);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("global","",614,646);
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("include","",696,735);
$z[4][4]['filename']="header_m.htm";
$z[5]=Array("field","",851,880);
$z[5][4]['name']="typename";
$z[6]=Array("list","\n						<li class=\"\">\n							<div class=\"media media-lg\">\n								<div class=\"media-left\">\n									<a href=\"view.php?aid=[field:id]\" title=\"[field:title/]\" target='_self'>\n										<img class=\"media-object\" src=\"[field:picname/]\" style='height:150px;' alt=\"[field:title/]\">\n									</a>\n								</div>\n								<div class=\"media-body\">\n									<h4 class=\"media-heading\">\n										<a href=\"view.php?aid=[field:id]\" title=\"[field:title/]\" target='_self'>\n											[field:title/]\n										</a>\n									</h4>\n									<p class=\"des\">[field:description function=\"cn_substr(@me,50)\"/]... </p>\n									<p class=\"info\">\n										<span>[field:pubdate function=\"GetDateTimeMK(@me)\" /]</span>\n										<span>[field:writer/]</span>\n										<span><i class=\"icon wb-eye margin-right-5\" aria-hidden=\"true\"></i>[field:click/]   </span>\n									</p>\n								</div>\n							</div>\n						</li>\n",1189,2113);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",2221,2278);
$z[7][4]['listitem']="pre,pageno,next,";
$z[7][4]['listsize']="5";
$z[8]=Array("sql","\n							<li class=\"list-group-item\"><a href=\"view.php?aid=[field:id]\" title=\"[field:title/]\" target='_self'>[field:title/]</a></li>\n							",3278,3512);
$z[8][4]['sql']="select * from #@__archives where typeid = 43 order by rand() limit 8";
$z[9]=Array("include","",3647,3686);
$z[9][4]['filename']="footer_m.htm";

?>